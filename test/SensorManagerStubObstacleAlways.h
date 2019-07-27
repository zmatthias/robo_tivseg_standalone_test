#pragma once

#include "../include/MarkerInfo.hpp"
#include "../include/BoundingBox.hpp"
#include "SensorManagerStub.h"

/// Stub that always emulates an obstacle
class SensorManagerStubObstacleAlways : public SensorManagerStub
{
public:
	SensorManagerStubObstacleAlways();
    double getDepth(int x, int y) override;

protected:

   const double m_depth = 0.1;

};