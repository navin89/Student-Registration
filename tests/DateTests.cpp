//
// Created by Navin Tamilchelvam on 2019-03-01.
//


#include <gtest/gtest.h>
#include "../src/Date.h"


TEST(DateTestSuite, testDateGetMethods){

    unsigned testDay = 9;
    string testMth = "June";
    unsigned testYear = 1992;

    Date date;

    date.SetDayNo(testDay);
    date.SetMonth(testMth);
    date.SetYearNo(testYear);


    ASSERT_EQ(testDay, date.GetDayNo() );
    ASSERT_EQ(testMth, date.GetMonth() );
    ASSERT_EQ(testYear, date.GetYearNo() );

}



