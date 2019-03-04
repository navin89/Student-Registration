//
// Created by Navin Tamilchelvam on 2019-03-02.
//

#include <gtest/gtest.h>
#include "../src/Units.h"


TEST(UnitsTestSuite, testSetterAndGetters)
{

    Units units;

    string navin = "Navin";

    units.SetName(navin);
    // getName
    string nameOutput = units.GetName();



    ASSERT_EQ(nameOutput, navin);
}

TEST(UnitsTestSuite, testReArrangementOfString)
{
    Units units;

    string testStr = "ICT_Computer Graphics";
    string testStrUnitId = "283";

    // must rearrange and return only ICT
    units.ReArrangeStringWithUnitID(testStr, testStrUnitId);

    EXPECT_EQ(testStr, "ICT");

}