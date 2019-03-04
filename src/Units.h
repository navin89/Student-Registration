//
// Created by Navin Tamilchelvam on 2019-03-01.
//

#ifndef REGISTRATION_UNITS_H
#define REGISTRATION_UNITS_H
#include <iostream>

using namespace std;

class Units {

public:

    Units();

    void SetCredits(unsigned&);
    unsigned int GetCredits() const;

    // ID unit
    void SetID_Unit(string&);
    string GetIDUnit() const;

    // name
    void SetName(string& inputName);
    string GetName() const;


    void CleanTheString(string& , const string& , const string& );
    void ReArrangeStringWithUnitID(string&, string&);
    int isCapital(char x);



private:

    string name;                 // unit name, C style string. not a C++ string object
    string  ID_Unit;       // unit id type integer
    unsigned int  credits;       // number of credits

};


inline void Units::SetCredits(unsigned &creditsInput)
{
    credits = creditsInput;

}

inline unsigned Units::GetCredits() const
{
    /// PostCondition: return credits
    return credits;
}

inline void Units::SetID_Unit(string &idUnit)
{
    ID_Unit = idUnit;
}

inline string Units::GetIDUnit() const
{
    /// PostCondition: return ID_Unit
    return ID_Unit;
}

inline void Units::SetName(string& inputName){

    name = inputName;
}

inline string Units::GetName() const
{
    /// PostCondition: return name
    return name;
}

#endif //REGISTRATION_UNITS_H
