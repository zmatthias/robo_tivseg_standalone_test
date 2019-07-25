#include <gtest/gtest.h>
#include "../src/ObstacleModule.h"
#include "SensorManager_Stub.h"

TEST(EmptyTest, TrueAndFalse)
{
    bool b = true;
    EXPECT_EQ(b, true);
    EXPECT_NE(b, false);
}

TEST(ObstacleTest, checkObstacle)
{
    SensorManager_Stub *myStubManager = new SensorManager_Stub();
    ObstacleModule testObstModule;
    auto obstaclePresence = testObstModule.checkObstacle(myStubManager);
    EXPECT_EQ(obstaclePresence, true);

}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
