//
// Created by Navin Tamilchelvam on 2019-03-01.
//

#include "Units.h"

Units::Units() = default;

void Units::CleanTheString(string& inputStr, const string &thisStr, const string &toBeReplaced)
{

    unsigned long pos=0;

    unsigned long thisStrLen = thisStr.length();
    unsigned long replacingStrLen = toBeReplaced.length();

//    for(unsigned i=0; i < inputStr.length(); i++){
//        if(isCapital(inputStr[i]))
//        {
//            inputStr.append(inputStr, i, 1);
//
//        }
//    }

    while((pos = inputStr.find(toBeReplaced, pos)) != -1)
    {
        inputStr.replace(pos, replacingStrLen, thisStr);
        // increment the position replaced
        pos += thisStrLen;
    }

}


void Units::ReArrangeStringWithUnitID(string& name, string& unitId)
{

    string alteredUnitName;
    string alteredUnitID;

    alteredUnitID = name.substr(0,3) + unitId;
    alteredUnitName = name.substr(4, name.length() -1);

    unitId = alteredUnitID;
    name = alteredUnitName;

}

int Units::isCapital(char x)
{
    if (x >='A' && x <= 'Z'){
        return 1;
    } else {
        return 0;
    }
}






