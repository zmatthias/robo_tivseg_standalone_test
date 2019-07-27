#include <gtest/gtest.h>
#include "../src/ObstacleModule.h"
#include "../src/ObstacleModule.cpp"

#include "SensorManagerStubObstacleAlways.h"
#include "SensorManagerStubObstacleNever.h"


TEST(ObstacleTest, checkIfObstacle)
{
    auto *myStubManager = new SensorManagerStubObstacleAlways();
    auto myObstacleModule = new ObstacleModule<SensorManagerStubObstacleAlways*> (myStubManager);
    myObstacleModule->action();
    auto obstaclePresence = myObstacleModule->getObstacleStatus();
    EXPECT_EQ(obstaclePresence, true);
}


TEST(ObstacleTest, checkIfNoObstacle)
{
    auto *myStubManager = new SensorManagerStubObstacleNever();
    auto myObstacleModule = new ObstacleModule<SensorManagerStubObstacleNever*> (myStubManager);
    myObstacleModule->action();
    auto obstaclePresence = myObstacleModule->getObstacleStatus();
    EXPECT_EQ(obstaclePresence, false);
}

TEST(ImageProcessingTest, checkMarker)
{
    auto *myStubManager = new SensorManagerStubObstacleNever();
    auto myObstacleModule = new ObstacleModule<SensorManagerStubObstacleNever*> (myStubManager);
    myObstacleModule->action();
    auto obstaclePresence = myObstacleModule->getObstacleStatus();
    EXPECT_EQ(obstaclePresence, false);
}




int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
