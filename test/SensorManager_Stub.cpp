///////////////////////////////////////////////////////////
//  MovementModule.cpp
//  Implementation of the Class MovementModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#include "SensorManager_Stub.h"


SensorManager_Stub::SensorManager_Stub(){

}



SensorManager_Stub* SensorManager_Stub::getInstance() {
	return myManager;
}

double SensorManager_Stub::getDepth(int x, int y){
	//if(x < (xMax/xSections)){}
	return 1.0;
}

bool SensorManager_Stub::runOnce() {
	return true;
}

std::vector<MarkerInfo> SensorManager_Stub::getMarkerList() {
	std::vector<MarkerInfo> myVector;
	return myVector;
}

int SensorManager_Stub::getSensorWidth() {
	return 640;
}

int SensorManager_Stub::getSensorHeight() {
	return 480;
}

Color SensorManager_Stub::getRGBValue(int x, int y) {
	Color mycolor;
	return mycolor;

}

float SensorManager_Stub::getFps() {
	return 29.5;
}

struct SDL_Surface* SensorManager_Stub::getDebugDisplaySurface() {
	return 0;
}