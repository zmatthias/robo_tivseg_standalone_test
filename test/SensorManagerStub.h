#pragma once

#include "../include/MarkerInfo.hpp"
#include "../include/BoundingBox.hpp"

#include <vector>

/// Sensor and image processing manager.
class SensorManagerStub
{
public:
    SensorManagerStub();

    /// Get the instance of the sensor manager.
    SensorManagerStub* getInstance();

    /// Update color and depth data, and perform marker detection.
	bool runOnce();

	/// Get the list of currently detected markers.
	std::vector<MarkerInfo> getMarkerList();

	/// Get the width of the sensor data.
	int getSensorWidth();

	/// Get the height of the sensor data.
	int getSensorHeight();
	
	/// Get the depth [m] at the given pixel in the sensor data.
	virtual double getDepth(int x, int y);

	/// Get the RGB-Value at the given pixel in the sensor data.
	Color getRGBValue(int x, int y);

	/// Get an average of the current processing FPS
	float getFps();


protected:
    SensorManagerStub *myManager;

    int m_sensorHeight = 480;
    int m_sensorWidth = 640;
    double m_fps = 29.5;

private:
    double m_depth = 0;

};
