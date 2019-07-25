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





int ObstacleModule::createRandomXValue(){
	int value = rand() % m_maxWidth;
	return value;
}

int ObstacleModule::createRandomYValue(){
	int value = rand() % m_maxHeight;
	return value;
}