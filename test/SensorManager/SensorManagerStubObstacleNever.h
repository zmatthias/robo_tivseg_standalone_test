#pragma once

#include "../../include/MarkerInfo.hpp"
#include "../../include/BoundingBox.hpp"
#include "SensorManagerStub.h"

/// Stub that never emulates an obstacle
class SensorManagerStubObstacleNever : public SensorManagerStub
{
public:
	SensorManagerStubObstacleNever();
    double getDepth(int x, int y) override;

protected:

	const double m_depth = 1.0;

};
