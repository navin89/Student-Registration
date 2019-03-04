#include <iostream>
#include <fstream>
#include <gtest/gtest.h>
#include "src/Registration.h"

using namespace std;


int main() {

    // TEST (Google Test)
//    cout << "All tests begin..." << std::endl;
//
//    testing::InitGoogleTest();
//    RUN_ALL_TESTS();


    // Filename  variable
    string inFileName;

    cout << "Enter the input file name: ";
    getline(cin, inFileName);

    // input file stream
    ifstream infile(inFileName.c_str(), ios::in);
    ofstream ofile( "../data/routput.txt", ios::out);

    if( !infile ) return -1;

    if (infile.is_open()){

        cout<<"file: "<<inFileName<<" opened OK!"<<endl;

        // If can open file
        // init Registration Object
        Registration registration;

        // Read info from file
        registration.GetRegistrationInfoFromFile(infile);
        // Write info to file
        registration.SetRegistrationInfoToFile(ofile);

    }else {
        cout<<"ERROR: "<<inFileName<<" could not be opened for input!!"<<endl;
        exit(1);
    }

    // close ifstream and ofstream
    infile.close();
    infile.clear();
    ofile.close();
    ofile.close();

    return 0;
}