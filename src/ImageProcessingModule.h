///////////////////////////////////////////////////////////
//  ImageProcessingModule.h
//  Implementation of the Class ImageProcessingModule
//  Created on:      04-Jun-2019 18:01:12
//  Original author: student
///////////////////////////////////////////////////////////

#pragma once

#include <list>
#include <iterator>
#include <math.h>
#include <vector>
#include "../include/MarkerInfo.hpp"
#include "../include/BoundingBox.hpp"
#include "Positions.h"
#include "AbstractModule.h"
#include "ProtocolModule.h"

///<summary>
/// Gets the wanted marker and calculates its middlepoint in polar coodinates
///<summary>
template <typename TSens>
class ImageProcessingModule : public AbstractModule
{

public:
	ImageProcessingModule(TSens SensorManager);
	void action() override;
	/**@brief Chooses a BoudingBox and calculates it's position \n
	*		Selects a BoudingBox, calculates the position of it's middlepoint in polar coodinates and sends the data to DriveDecisionModule.
	*
	*  @return void
	*/
	void analyzePicture();

private:

    TSens m_SensorManager;
    PolarPosition m_target;

    /**@brief Gets a list of markes and returns the biggest one \n
	*		Gets a list of markers from the SensorManager and chooses the one that has the largest width.
	*
	*  @return the biggest BoudingBox as BoudingBox
	*/
	BoundingBox getFeasibleMarker();
	
	/**@brief Calculates the middlepoint of a boundingbox \n
	*		 A middlepoint contains a x and a y value in pixel and a depthinformation distance in meters. 
	*
	*  @param BoudingBox to calculate middlepoint
	*  @return middlepoint of the BoudingBox as ImagePosition3D
	*/
	ImagePosition3D getImagePosition3D(BoundingBox box);
	
	/**@brief Converts cartesian coordinates into polar coordinates \n
	*		 The depthinformation distance is mapped on the distance in polar coordinates. \n The angle of 0° is defined in the middle of the picute, the left side -45° and the right side 45°. 
	*
	*  @param coodinates in cartesian coordinates as ImagePosition3D
	*  @return polar coordinates of the given point as PolarPosition
	*/
	PolarPosition calculatePolarPosition(ImagePosition3D imgPos);


	std::string m_DiagName = "ImgP_M";


};