//
// Created by Navin Tamilchelvam on 2019-03-01.
//

#include <fstream>
#include "Result.h"

Result::Result() = default;

// for testing
void Result::SetCredits(unsigned& credits)
{

    units[0].SetCredits(credits);
    units[1].SetCredits(credits);
}


unsigned int Result::GetCredits(int count) const
{
    return units[count].GetCredits();
}


void Result::GetResultsInfo(int& count, string& name,
                    string& idUnit, unsigned& credits, unsigned& mrks, unsigned& day, string& month, unsigned& year)
{

    // String refurbishments
    units[count].CleanTheString(name, " ", "_");
    units[count].CleanTheString(name, " And ", "&");
    units[count].ReArrangeStringWithUnitID(name, idUnit);
    // Unit Info
    units[count].SetName(name);
    units[count].SetID_Unit(idUnit);
    units[count].SetCredits(credits);
    // Marks
    SetMarks(mrks);
    // Date
    dates[count].SetDayNo(day);
    dates[count].SetMonth(month);
    dates[count].SetYearNo(year);

//    cout << '\n' << name << " " << idUnit << " " << credits << " "<< mrks;

}


void Result::SetResultsInfo(ofstream &fileOutput, int count)
{
    fileOutput << '\t' << "Unit ID: " << units[count].GetIDUnit() << '\n'
               << '\t' << "Unit Name: " << units[count].GetName() << '\n'
               << '\t' << "Credits: " << units[count].GetCredits() << '\n'
               << '\t' << "Marks: " << GetMarks() << '\n'
               << '\t' << "Date: " << dates[count].GetDayNo()<<" "
                                   << dates[count].GetMonth()<<" "
                                   << dates[count].GetYearNo()<< '\n'<<'\n';
}

