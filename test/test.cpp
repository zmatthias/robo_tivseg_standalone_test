#include <gtest/gtest.h>
#include "../src/ObstacleModule.h"

#include "SensorManager_Stub.h"

TEST(EmptyTest, TrueAndFalse)
{
    bool b = true;
    EXPECT_EQ(b, true);
    EXPECT_NE(b, false);
}




TEST(ObstacleTest, checkIfNoObstacle)
{
    SensorManager_Stub *myStubManager = new SensorManager_Stub();
    ObstacleModule *myObstModule = new ObstacleModule();

    auto obstaclePresence = myObstModule->checkObstacle(myStubManager);
    //myObstModule->printShit<int>(5);
    EXPECT_EQ(obstaclePresence, false);

}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
