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
    auto *myStubManager = new SensorManager_Stub();

    auto myObstacleModule = new ObstacleModule<SensorManager_Stub*> (myStubManager);

    auto obstaclePresence = myObstacleModule->checkObstacle();
    EXPECT_EQ(obstaclePresence, false);

}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
