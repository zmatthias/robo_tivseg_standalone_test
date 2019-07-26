///////////////////////////////////////////////////////////
//  ImageProcessingModule.cpp
//  Implementation of the Class ImageProcessingModule
//  Created on:      04-Jun-2019 18:01:12
//  Original author: student
///////////////////////////////////////////////////////////

#include "ImageProcessingModule.h"


ImageProcessingModule::ImageProcessingModule(DriveDecisionModule* objDrivDecM) {
	m_DriveDecisionModule = objDrivDecM;
}

void ImageProcessingModule::action() {
		DIAG_VERBOSE(m_DiagName + ": Action");
		analyzePicture();
}

void ImageProcessingModule::notifyDriveDecisionModule(PolarPosition targetMarkerMiddle) {
	m_DriveDecisionModule->m_StrategyCurrent->setTargetMarker(targetMarkerMiddle);
}


void ImageProcessingModule::analyzePicture() {
	
	BoundingBox boundingBox = getFeasibleMarker();
	auto height = boundingBox.getHeight();
	auto width = boundingBox.getWidth();

	if (height > 100 && width > 100 && width/height < 1.3 && width/height > 0.7) {
		DIAG_INFO(m_DiagName + ": Markerbox Height:" + std::to_string(boundingBox.getHeight()) + " Markerbox Width:" + std::to_string(boundingBox.getWidth()));

		ImagePosition3D imgPos = getImagePosition3D(getFeasibleMarker());
		DIAG_INFO(m_DiagName + ": targetmarker x:" + std::to_string(imgPos.x)+ " y:" + std::to_string(imgPos.y));

		auto targetMarkerPosition = calculatePolarPosition(imgPos);
		notifyDriveDecisionModule(targetMarkerPosition);
	}
	else {

		PolarPosition targetMarkerPosition;
		targetMarkerPosition.angle = 0;
		targetMarkerPosition.distance = 0;
		DIAG_INFO(m_DiagName + ": marker information is null");
		notifyDriveDecisionModule(targetMarkerPosition);

	}

}

//gets a List of markes and returns the biggest one
BoundingBox ImageProcessingModule::getFeasibleMarker(){

	BoundingBox box; 	
	auto m_sensorManager = SensorManager::getInstance();
	std::vector<MarkerInfo> markerList = m_sensorManager -> getMarkerList();
	int boxId = 0;
	for (int i = 0; i < markerList.size(); i++) {
		std::vector<MarkerInfo>::iterator it = markerList.begin();
		std::advance(it, i);
		MarkerInfo info = *it;
		BoundingBox testBox = info.m_Marker;
		if ( testBox.getWidth() > box.getWidth()) {
			box = info.m_Marker;
			boxId = info.m_Id;
		}
	}
	DIAG_DEBUG(m_DiagName +" : selectec boudingBox with id " + std::to_string(boxId));
	return  box;
}
//determinises the middlepoint of a boundingbox
// x and y middlepoint of the boudingbox, z distance from the middlepoint via depthinformation 

ImagePosition3D ImageProcessingModule::getImagePosition3D(BoundingBox box){
	
	ImagePosition3D imgPos; 
	imgPos.x = box.x() + box.getWidth() / 2;
	imgPos.y = box.y() - box.getHeight() / 2;
	auto m_sensorManager = SensorManager::getInstance();
	imgPos.distance = m_sensorManager -> getDepth(imgPos.x, imgPos.y);
	DIAG_DEBUG(m_DiagName + ": calculated middlePoint of boundinfbox: x:" + std::to_string(imgPos.x) + " y:" + std::to_string(imgPos.y));
	return imgPos;
}

//Convert cartesian coordinates into polar coordinates
PolarPosition ImageProcessingModule::calculatePolarPosition(ImagePosition3D imgPos){
	
	PolarPosition polPos;
	auto m_sensorManager = SensorManager::getInstance();
	double pictureLength = (double) m_sensorManager->getSensorWidth();
	polPos.distance = imgPos.distance;
	auto imageXDistance = imgPos.x - pictureLength / 2;
	polPos.angle = imageXDistance / pictureLength * 90;
	DIAG_INFO(m_DiagName + " : calculated PolarPosition: distance" + std::to_string(polPos.distance) + " angle:" + std::to_string(polPos.angle));
	return  polPos;
}