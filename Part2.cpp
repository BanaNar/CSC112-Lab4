/*
 *  @file    labFour_Part2.cpp
 *  @author  Tony Xu (xuj16)
 *  @date    2/23/2018
 *  @version 3.2
 *
 *  This is a little program that find the maximum value among 4 values from user.
 *
 */
#include <iostream>
using namespace std;

double FindMax(const double num1, const double num2) {
    double maxVal;

    if (num1 > num2) {   // if num1 is greater than num2,
        maxVal = num1;   // then num1 is the maxVal.
    }
    else {               // Otherwise,
        maxVal = num2;   // num2 is the maxVal.
    }
    return maxVal;
}

double FindMax4(const double num1, const double num2, const double num3, const double num4){

    return FindMax(FindMax(num1, num2), FindMax(num3, num4));

}

string FindMax(string word1, string word2){

    string maxWord;

    if (word1 > word2) {   // if word1 is greater than word2,
        maxWord = word1;   // then word1 is the maxWord.
    }
    else {                 // Otherwise,
        maxWord = word2;   // word2 is the maxWord.
    }
    return maxWord;
}

string FindMax4(string word1, string word2, string word3, string word4){

    return FindMax(FindMax(word1, word2), FindMax(word3, word4));

}


int main(){

    char typeChoice;
    double num1, num2, num3, num4;
    double maxVal;
    string word1, word2, word3, word4;
    string maxWord;

    while (typeChoice != 'x') {

        cout << "Enter 'd' or 's' or 'x': ";
        cin >> typeChoice;

        switch (typeChoice) {

            case 'd':

                cout << "Enter 4 numbers: " << endl;
                cin >> num1 >> num2 >> num3 >> num4;

                maxVal = FindMax4(num1, num2, num3, num4);

                cout << "maxVal is: " << maxVal << endl;

                break;

            case 's':

                cout << "Enter 4 strings: " << endl;
                cin >> word1 >> word2 >> word3 >> word4;

                maxWord = FindMax4(word1, word2, word3, word4);

                cout << "maxVal is: " << maxWord << endl;

                break;


            case 'x':

                break;

            default:

                cout << "Invalid type choice." << endl;

                break;

        }
    }
    return 0;

}