/*
 *  @file    labFour_Part3.cpp
 *  @author  Tony Xu (xuj16)
 *  @date    2/27/2018
 *  @version 2.0
 *
 *  This is a little program that check the validity of userID.
 *
 */
#include <iostream>
#include "ID_Functions.h"
using namespace std;

int main() {

    string userID; // string userID to store input
    ID_Functions checkValid;

    cout << "Enter userID: " << endl;
    cin >> userID;

    while (userID != "END") { // When input is not "END"

        if (checkValid.IsValidID(userID) == true) {
            cout << userID << " valid" << endl;
        } else if (checkValid.IsValidID(userID) == false){
            cout << userID << " not valid" << endl;
        }

        cout << "Enter userID: " << endl;
        cin >> userID;

    }

    return 0;
}