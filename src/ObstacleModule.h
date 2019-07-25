///////////////////////////////////////////////////////////
//  ObstacleModule.h
//  Implementation of the Class ObstacleModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#if !defined(EA_72EC47CD_8EF0_4332_B1F6_C2CDEE9F1D68__INCLUDED_)
#define EA_72EC47CD_8EF0_4332_B1F6_C2CDEE9F1D68__INCLUDED_

//#include "DriveDecisionModule.h"
//#include "SensorManager.hpp"

#include "../test/SensorManager_Stub.h"
#include "ProtocolModule.h"

class ObstacleModule
{

public:
	/// Constructor of the ObstacleModule class
	ObstacleModule();
	
	/// Destructor of the ObstacleModule class
	~ObstacleModule();
	
	/**@brief checks if an obstacle is located in front of the camera
	*   For a fixed number of pixels the depth information is checked. If the pixel-depth is lower than the minimal distance, a warning is submitted
	*  @param -
	*  @return boolean; declares if an obstacle is detected
	*/
	//template<typename T>
	//bool checkObstacle(T m_sensorManager);
    bool checkObstacle(SensorManager_Stub *myStub);

	//DriveDecisionModule* m_DriveDecisionModule;
	
	/// Pointer to an instance of the ControllerModule class
	//ControllerModule* m_ControllerModule;
	
	
private:

	/// Number of pixels to be checked for depth information
	int m_pixelsToCheckCount = 3000;
	
	/// If objects are closer than this distance, a warning is submitted and the motor stops
	double m_minDistance = 0.20;
	
	/// Pixel resolution of the camera image
	int m_maxWidth = 640;
	int m_maxHeight = 480;


	/**@brief Checks the depth of single pixels
	*	Calls the method "getDepth" of the "SensorManager" class, which returns the depth_information of the pixels. 
	*	Pixels are selected by the "getXValue" and "getYValue" methods
	*  @param -
	*  @return Depth information of a randomly selected pixel
	*/
	//template<typename T>
	//double checkPixelDepth(int x, int y,T m_sensorManager);
    double checkPixelDepth(int x, int y,SensorManager_Stub *myStub);

	/**@brief creates a random value
	*	Creates a random value for the x-coordinate of the pixel. Since the sensor height is 480 pixels, boundaries are 0 and 480
	*  @param -
	*  @return random integer value in the range from 0 to 480
	*/
	int createRandomXValue();

	
	/**@brief Erzeugt einen zuf�lligen X-Wert
	*	Creates a random value for the y-coordinate of the pixel. Since the sensor width is 640 pixels, boundaries are 0 and 640
	*  @param -
	*  @return random integer value in the range from 0 to 480
	*/
	int createRandomYValue();



};
#endif // !defined(EA_72EC47CD_8EF0_4332_B1F6_C2CDEE9F1D68__INCLUDED_)
