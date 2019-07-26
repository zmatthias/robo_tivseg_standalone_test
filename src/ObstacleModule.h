///////////////////////////////////////////////////////////
//  ObstacleModule.h
//  Implementation of the Class ObstacleModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#pragma once

//#include "DriveDecisionModule.h"
//#include "SensorManager.hpp"

#include "../test/SensorManagerStubObstacleNever.h"
#include "ProtocolModule.h"
#include "Positions.h"

template < typename TSens>
class ObstacleModule
{

public:
	/// Constructor of the ObstacleModule class
	ObstacleModule(TSens SensorManager);
	
	/// Destructor of the ObstacleModule class

	/**@brief checks if an obstacle is located in front of the camera
	*   For a fixed number of pixels the depth information is checked. If the pixel-depth is lower than the minimal distance, a warning is submitted
	*  @param -
	*  @return boolean; declares if an obstacle is detected
	*/
	bool checkObstacle();

    //DriveDecisionModule* m_DriveDecisionModule;
	
	/// Pointer to an instance of the ControllerModule class
	//ControllerModule* m_ControllerModule;
	
	
private:

	/// Number of pixels to be checked for depth information
	int m_pixelsToCheckCount = 3000;
	
	/// If objects are closer than this distance, a warning is submitted and the motor stops
	double m_minDistance = 0.20;
	
	/// Pixel resolution of the camera image
	int m_cameraImageWidth;
	int m_cameraImageHeight;

    TSens m_SensorManager;

    /// If measurements are closer than this distance, it is considered invalid. The measurement is then set to m_distanceAfterInvalid
    double m_minDistanceInvalid = 0.001;
    double m_distanceAfterInvalid = 99;


    /**@brief Checks the depth of single pixels
	*	Calls the method "getDepth" of the "SensorManager" class, which returns the depth_information of the pixels. 
	*	Pixels are selected by the "getXValue" and "getYValue" methods
	*  @param -
	*  @return Depth information of a randomly selected pixel
	*/
    double checkPixelDepth(int x, int y);


    ImagePosition2D createRandomXY();
    /**@brief creates a random value
    *	Creates a random value for the x-coordinate of the pixel. Since the sensor height is 480 pixels, boundaries are 0 and 480
    *  @param -
    *  @return random ImagePosisition2D in the range of the sensor widths and heights
    */



};