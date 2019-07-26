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

template < typename TSens>
class ObstacleModule
{

public:
	/// Constructor of the ObstacleModule class
    explicit ObstacleModule(TSens SensorManager): m_Sensormanager(SensorManager) {}
	
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
	int m_maxWidth = 640;
	int m_maxHeight = 480;

    TSens m_Sensormanager;


	/**@brief Checks the depth of single pixels
	*	Calls the method "getDepth" of the "SensorManager" class, which returns the depth_information of the pixels. 
	*	Pixels are selected by the "getXValue" and "getYValue" methods
	*  @param -
	*  @return Depth information of a randomly selected pixel
	*/
    double checkPixelDepth(int x, int y);

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



template < typename TSens>
bool ObstacleModule<TSens>::checkObstacle(){

    for (auto i = 0; i < m_pixelsToCheckCount; i++){
        auto currentX = createRandomXValue();
        auto currentY = createRandomYValue();
        auto currentPixelDepth = checkPixelDepth(currentX, currentY);

        if (currentPixelDepth < m_minDistance){
            DIAG_WARNING("OM: Obstacle ahead at distance " + std::to_string(currentPixelDepth)+"m "+"at coordinates"+" x: " +std::to_string(currentX)+" y: "+std::to_string(currentY));
            return true;
        }
    }
    return false; //if no pixel closer than the minimum distance was found
}

template < typename TSens>
double ObstacleModule<TSens>::checkPixelDepth(int x, int y){
    auto distance = m_Sensormanager->getDepth(createRandomXValue(), createRandomYValue());
    //the sensor sometimes reports 0.00m distance for some pixels as a bug, so we set the value to 99.9m to not mess up the obstacle detection
    if (distance < 0.001) {
        distance = 99.99;
    }
    return distance;
}


template < typename TSens>
int ObstacleModule<TSens>::createRandomXValue(){
    int value = rand() % m_maxWidth;
    return value;
}
template < typename TSens>
int ObstacleModule<TSens>::createRandomYValue(){
    int value = rand() % m_maxHeight;
    return value;
}



#endif // !defined(EA_72EC47CD_8EF0_4332_B1F6_C2CDEE9F1D68__INCLUDED_)
