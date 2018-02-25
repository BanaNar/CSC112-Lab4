/*
 *  @file    labFour_Part1.cpp
 *  @author  Tony Xu (xuj16)
 *  @date    2/23/2018
 *  @version 1.0
 *
 *  This is a little program that find the maximum value among 4 values from user.
 *
 */
#include <iostream>
using namespace std;

double FindMax(const double num1, const double num2) {
    double maxVal = 0.0;

    if (num1 > num2) {   // if num1 is greater than num2,
        maxVal = num1;   // then num1 is the maxVal.
    }
    else {               // Otherwise,
        maxVal = num2;   // num2 is the maxVal.
    }
    return maxVal;
}

double FindMax4(double num1, double num2, double num3, double num4){

    return FindMax(FindMax(num1, num2), FindMax(num3, num4));

}

int main(){

    double num1, num2, num3, num4;
    double maxVal;

    cout << "Enter 4 numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    maxVal = FindMax4(num1, num2, num3, num4);

    cout << "maxVal is: " << maxVal;

    return 0;

}