//
// Created by Navin Tamilchelvam on 2019-03-01.
//

#include "Registration.h"
#include <iostream>
#include <fstream>
using namespace std;

Registration::Registration()
{
    count =0;
}


unsigned int Registration::GetCredits() const
{
    unsigned sum = 0;
    int count = GetCount();
    for(unsigned i = 0; i < count; i++)
        sum += results[i].GetCredits(i);

    return sum;
}


void Registration::GetRegistrationInfoFromFile(ifstream &fileInputToRead)
{
    string name;
    string month;
    unsigned long sId;
    unsigned noOfSemester;
    unsigned noOfCount;
    string idUnit;
    unsigned credits;
    unsigned marks;
    unsigned day;
    unsigned year;


    while(fileInputToRead >> sId >> noOfSemester >> noOfCount)
    {

        SetStudentId(sId);
        SetSemesters(noOfSemester);
        SetCount(noOfCount);

        for(int resultIndex =0; resultIndex < GetCount(); resultIndex++)
        {
            fileInputToRead >> name >> idUnit >> credits >> marks >> day >> month >> year;
            results[resultIndex].GetResultsInfo(
                    resultIndex, name, idUnit, credits, marks, day, month, year);
        }

    }

}


void Registration::SetRegistrationInfoToFile(ofstream &fileOutput)
{

    fileOutput << "Student ID: " << GetStudentId() << '\n' << "Semesters: " << GetSemesters() << endl;


    for( int resultsIndex =0; resultsIndex < GetCount(); resultsIndex++)
    {
        results[resultsIndex].SetResultsInfo(fileOutput, resultsIndex);
    }

    fileOutput << "Number Of Units: " << GetCount() << endl;
    fileOutput << "Total Credits: " << GetCredits() << endl;


}

