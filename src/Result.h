//
// Created by Navin Tamilchelvam on 2019-03-01.
//

#ifndef REGISTRATION_RESULT_H
#define REGISTRATION_RESULT_H

#include <iostream>
#include "Units.h"
#include "Date.h"

using namespace std;
const unsigned MaxUnitResults = 10;

class Result {

public:

    Result();

    /// PostCondition: Get & Set Marks into var marks
    unsigned GetMarks() const;
    void SetMarks(unsigned& mrks);

    /// Testing purposes
    void SetCredits(unsigned& credits);
    /// PostCondition: GetCredits() will be used by Registration class
    unsigned GetCredits(int) const;


    void GetResultsInfo(int&, string&, string&, unsigned&, unsigned&, unsigned&, string&, unsigned&);
    void SetResultsInfo(ofstream &fileOutput, int);

private:

    Units units[MaxUnitResults];
    Date dates[MaxUnitResults];
    unsigned marks;
    unsigned count;

};

inline unsigned Result::GetMarks() const
{
    return marks;
}

inline void Result::SetMarks(unsigned& mrks)
{
    marks = mrks;
}



#endif //REGISTRATION_RESULT_H
