///////////////////////////////////////////////////////////
//  MovementModule.cpp
//  Implementation of the Class MovementModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#include "SensorManagerStub.h"


SensorManagerStub::SensorManagerStub(){

}



SensorManagerStub* SensorManagerStub::getInstance() {
	return myManager;
}

double SensorManagerStub::getDepth(int x, int y){
	//if(x < (xMax/xSections)){}
	return m_depth;
}

bool SensorManagerStub::runOnce() {
	return true;
}

std::vector<MarkerInfo> SensorManagerStub::getMarkerList() {
	std::vector<MarkerInfo> myVector;
	return myVector;
}

int SensorManagerStub::getSensorWidth() {
    return m_sensorWidth;
}

int SensorManagerStub::getSensorHeight() {
    return m_sensorHeight;
}

Color SensorManagerStub::getRGBValue(int x, int y) {
	Color mycolor;
	return mycolor;

}

float SensorManagerStub::getFps() {
	return m_fps;
}
