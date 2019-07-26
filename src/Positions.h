#ifndef POSITIONS_INCLUDED
#define POSITIONS_INCLUDED

/// Coordinates in the picture in x and y and depthinformation of the pixel defined through x and y in the picture as distance
struct ImagePosition2D {
    int x,y;
};

struct ImagePosition3D {
	int x,y; 
	double distance;
};

/// 2D Polarposition consisting of an angle in the picture in relation to the middle of the picture (0�) 
/// and the distance of the point to the camera. 
struct PolarPosition {
	double distance, angle;
};

#endif //POSITIONS_INCLUDED