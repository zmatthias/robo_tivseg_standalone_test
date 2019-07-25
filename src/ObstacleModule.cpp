///////////////////////////////////////////////////////////
//  ObstacleModule.cpp
//  Implementation of the Class ObstacleModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#include "ObstacleModule.h"
#include <iostream>

// Constructor
ObstacleModule::ObstacleModule(){
	
}

// Destructor
ObstacleModule::~ObstacleModule(){

}

//template<typename T>
bool ObstacleModule::checkObstacle(SensorManager_Stub *myStub){

	for (auto i = 0; i < m_pixelsToCheckCount; i++){
		auto currentX = createRandomXValue();
		auto currentY = createRandomYValue();
		auto currentPixelDepth = checkPixelDepth(currentX, currentY, myStub);

		if (currentPixelDepth < m_minDistance){
			DIAG_WARNING("OM: Obstacle ahead at distance " + std::to_string(currentPixelDepth)+"m "+"at coordinates"+" x: " +std::to_string(currentX)+" y: "+std::to_string(currentY));
			return true;
		}
	}
	return false; //if no pixel closer than the minimum distance was found
}

//template<typename T>
double ObstacleModule::checkPixelDepth(int x, int y, SensorManager_Stub *myStub){
	auto distance = myStub->getDepth(createRandomXValue(), createRandomYValue());
	//the sensor sometimes reports 0.00m distance for some pixels as a bug, so we set the value to 99.9m to not mess up the obstacle detection
	if (distance < 0.001) {
		distance = 99.99;
	}
	return distance;
}


int ObstacleModule::createRandomXValue(){
	int value = rand() % m_maxWidth;
	return value;
}

int ObstacleModule::createRandomYValue(){
	int value = rand() % m_maxHeight;
	return value;
}