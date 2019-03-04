//
// Created by Navin Tamilchelvam on 2019-03-02.
//

#include <gtest/gtest.h>
#include "../src/Result.h"

TEST(ResultsSuitTest, testSetterAndGetters)
{

    Result result;
    unsigned markSet = 87;

    result.SetMarks(markSet);
    int output = result.GetMarks();

    ASSERT_EQ(markSet, output);


}

TEST(ResultsSuitTest, testGetCredits)
{

    Units units;

    unsigned credit = 20;
    // put 10 * 2 -> into credits
    units.SetCredits(credit);

    int output = units.GetCredits();

    ASSERT_EQ(20, output);

}