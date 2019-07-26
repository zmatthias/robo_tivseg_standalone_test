///////////////////////////////////////////////////////////
//  ObstacleModule.cpp
//  Implementation of the Class ObstacleModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#include "ObstacleModule.h"
#include <iostream>

template <typename TSens>
ObstacleModule<TSens>::ObstacleModule(TSens SensorManager){
    m_SensorManager = SensorManager;
    m_cameraImageHeight = SensorManager->getSensorHeight();
    m_cameraImageWidth = SensorManager->getSensorWidth();

}

template <typename TSens>
void ObstacleModule<TSens>::action() {
    DIAG_VERBOSE(m_DiagName + ": Action");
    m_obstaclePresent = checkForObstacle();
}


template <typename TSens>
bool ObstacleModule<TSens>::getObstacleStatus() {
    return m_obstaclePresent;
}


template < typename TSens>
bool ObstacleModule<TSens>::checkForObstacle(){

    for (auto i = 0; i < m_pixelsToCheckCount; i++){
        auto currentImgPos = createRandomXY();
        auto currentPixelDepth = checkPixelDepth(currentImgPos.x, currentImgPos.y);

        if (currentPixelDepth < m_minDistance){
            DIAG_WARNING("OM: Obstacle ahead at distance " + std::to_string(currentPixelDepth)+"m "+
            "at coordinates"+" x: " +std::to_string(currentImgPos.x)+" y: "+std::to_string(currentImgPos.y));

            return true;
        }
    }
    return false; //if no pixel closer than the minimum distance was found
}

template < typename TSens>
///the sensor sometimes reports 0.00m distance for some pixels as a bug,
/// so we set the value to 99.9m to not mess up the obstacle detection
double ObstacleModule<TSens>::checkPixelDepth(int x, int y){
    auto distance = m_SensorManager->getDepth(x, y);

    if (distance < m_minDistanceInvalid) {
        distance = m_distanceAfterInvalid;
    }
    return distance;
}


template < typename TSens>
ImagePosition2D ObstacleModule<TSens>::createRandomXY(){
    ImagePosition2D result;
    result.x = rand() % m_cameraImageWidth;
    result.y = rand() % m_cameraImageHeight;

    return result;
}
