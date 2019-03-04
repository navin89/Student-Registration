//
// Created by Navin Tamilchelvam on 2019-03-01.
//

#ifndef REGISTRATION_REGISTRATION_H
#define REGISTRATION_REGISTRATION_H

#include <iostream>
#include "Units.h"
#include "Result.h"


using namespace std;

const unsigned maxNo = 10;

class Registration {

public:

    Registration();


    unsigned GetCredits() const;

    //count
    unsigned GetCount() const;
    void SetCount(unsigned&);

    // student id
    unsigned long GetStudentId() const;
    void SetStudentId(unsigned long&);

    // student semester
    unsigned GetSemesters() const;
    void SetSemesters(unsigned&);


    void GetRegistrationInfoFromFile(ifstream &fileInputToRead);
    void SetRegistrationInfoToFile(ofstream &fileOutput);

private:
    unsigned long studentId;
    unsigned semester;
    unsigned count;
    Result results[maxNo];
    Units units[maxNo];
};

inline unsigned Registration::GetCount() const
{
    /// PostCondition: return count for the number units
    return count;
}

inline void Registration::SetCount(unsigned& ct)
{
    count = ct;
}

inline unsigned long Registration::GetStudentId() const
{
    /// PostCondition: return studentId
    return studentId;
}

inline void Registration::SetStudentId(unsigned long& id)
{

    studentId = id;

}

inline unsigned int Registration::GetSemesters() const
{
    /// PostCondition: return semester
    return semester;
}

inline void Registration::SetSemesters(unsigned& sems) {

    semester = sems;
}


#endif //REGISTRATION_REGISTRATION_H
