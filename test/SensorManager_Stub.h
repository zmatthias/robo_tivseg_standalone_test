#pragma once

#include "../include/MarkerInfo.hpp"
#include "../include/BoundingBox.hpp"

#include <vector>

/// Sensor and image processing manager.
class SensorManager_Stub
{
public:
	SensorManager_Stub();
	/// Get the singleton instance of the sensor manager.
	SensorManager_Stub* getInstance();

	/// Update color and depth data, and perform marker detection.
	bool runOnce();

	/// Get the list of currently detected markers.
	std::vector<MarkerInfo> getMarkerList();

	/// Get the width of the sensor data.
	int getSensorWidth();

	/// Get the height of the sensor data.
	int getSensorHeight();
	
	/// Get the depth [m] at the given pixel in the sensor data.
	double getDepth(int x, int y);

	/// Get the RGB-Value at the given pixel in the sensor data.
	Color getRGBValue(int x, int y);

	/// Get an average of the current processing FPS
	float getFps();

	/// Get the surface for drawing debug information. This will by default already show the camera image.
	struct SDL_Surface* getDebugDisplaySurface();

protected:

	SensorManager_Stub *myManager;
};
