///////////////////////////////////////////////////////////
//  ImageProcessingModule.cpp
//  Implementation of the Class ImageProcessingModule
//  Created on:      04-Jun-2019 18:01:12
//  Original author: student
///////////////////////////////////////////////////////////

#include "ImageProcessingModule.h"

template <typename TSens>
ImageProcessingModule<TSens>::ImageProcessingModule(TSens SensorManager) {
    m_SensorManager = SensorManager;
}

template <typename TSens>
void ImageProcessingModule<TSens>::action() {
		DIAG_VERBOSE(m_DiagName + ": Action");
		analyzePicture();
}


template <typename TSens>
void ImageProcessingModule<TSens>::analyzePicture() {
	
	BoundingBox boundingBox = getFeasibleMarker();
	auto height = boundingBox.getHeight();
	auto width = boundingBox.getWidth();

	if (height > 100 && width > 100 && width/height < 1.3 && width/height > 0.7) {
		DIAG_INFO(m_DiagName + ": Markerbox Height:" + std::to_string(boundingBox.getHeight()) + " Markerbox Width:" + std::to_string(boundingBox.getWidth()));

		ImagePosition3D imgPos = getImagePosition3D(getFeasibleMarker());
		DIAG_INFO(m_DiagName + ": targetmarker x:" + std::to_string(imgPos.x)+ " y:" + std::to_string(imgPos.y));

		m_target = calculatePolarPosition(imgPos);
	}
	else {

		PolarPosition targetMarkerPosition;
		targetMarkerPosition.angle = 0;
		targetMarkerPosition.distance = 0;
        m_target =targetMarkerPosition;
		DIAG_INFO(m_DiagName + ": marker information is null");

	}

}

//gets a List of markes and returns the biggest one
template <typename TSens>
BoundingBox ImageProcessingModule<TSens>::getFeasibleMarker(){

	BoundingBox box; 	
	std::vector<MarkerInfo> markerList = m_SensorManager->getMarkerList();
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

template <typename TSens>
ImagePosition3D ImageProcessingModule<TSens>::getImagePosition3D(BoundingBox box){
	
	ImagePosition3D imgPos; 
	imgPos.x = box.x() + box.getWidth() / 2;
	imgPos.y = box.y() - box.getHeight() / 2;
	imgPos.distance = m_SensorManager -> getDepth(imgPos.x, imgPos.y);
	DIAG_DEBUG(m_DiagName + ": calculated middlePoint of boundinfbox: x:" + std::to_string(imgPos.x) + " y:" + std::to_string(imgPos.y));
	return imgPos;
}

//Convert cartesian coordinates into polar coordinates
template <typename TSens>
PolarPosition ImageProcessingModule<TSens>::calculatePolarPosition(ImagePosition3D imgPos){
	
	PolarPosition polPos;
	double imgWidth = (double) m_SensorManager->getSensorWidth();
	polPos.distance = imgPos.distance;
	auto imageXDistance = imgPos.x - imgWidth / 2;
	polPos.angle = imageXDistance / imgWidth * 90;
	DIAG_INFO(m_DiagName + " : calculated PolarPosition: distance" + std::to_string(polPos.distance) + " angle:" + std::to_string(polPos.angle));
	return  polPos;
}