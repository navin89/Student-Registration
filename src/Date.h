//
// Created by Navin Tamilchelvam on 2019-03-02.
//

#ifndef REGISTRATION_DATE_H
#define REGISTRATION_DATE_H

#include <iostream>
#include "Units.h"


class Date {

public:

    /// Constructor
    /// PostCondition: day, month, year == d,m,y
    Date();

    /// Getter methods
    unsigned GetDayNo();
    string GetMonth();
    unsigned GetYearNo();

    /// Setter methods
    void SetDayNo(unsigned& );
    void SetMonth(string& );
    void SetYearNo(unsigned& );

//    string subYo(string inputStr, const string& thisStr, const string& toBeReplaced);

private:

    unsigned day;
    string month;
    unsigned year;
};


inline unsigned Date::GetDayNo()
{
    return day;
}

inline void Date::SetDayNo(unsigned& d)
{
    day = d;
}

inline string Date::GetMonth()
{
    return month;
}

inline void Date::SetMonth(string& m)
{
    month = m;
}

inline unsigned Date::GetYearNo()
{
    return year;
}

inline void Date::SetYearNo(unsigned& y)
{
    year = y;
}



#endif //REGISTRATION_DATE_H
