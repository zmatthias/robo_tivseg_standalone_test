#include <gtest/gtest.h>
#include "../src/ObstacleModule.h"
#include "../src/ObstacleModule.cpp"

#include "SensorManagerStubObstacleAlways.h"
#include "SensorManagerStubObstacleNever.h"

TEST(EmptyTest, TrueAndFalse)
{
    bool b = true;
    EXPECT_EQ(b, true);
    EXPECT_NE(b, false);
}



TEST(ObstacleTest, checkIfObstacle)
{
    auto *myStubManager = new SensorManagerStubObstacleAlways();
    auto myObstacleModule = new ObstacleModule<SensorManagerStubObstacleAlways*> (myStubManager);
    auto obstaclePresence = myObstacleModule->checkObstacle();
    EXPECT_EQ(obstaclePresence, true);
}


TEST(ObstacleTest, checkIfNoObstacle)
{
    auto *myStubManager = new SensorManagerStubObstacleNever();
    auto myObstacleModule = new ObstacleModule<SensorManagerStubObstacleNever*> (myStubManager);
    auto obstaclePresence = myObstacleModule->checkObstacle();
    EXPECT_EQ(obstaclePresence, false);
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
