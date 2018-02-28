#include <iostream>
#include "ID_Functions.h"

bool ID_Functions::ContainsAnyOf (const std::string anyOf, const std::string testStr) {

    for (unsigned int i = 0; i < anyOf.size(); i++){
        if (testStr.find(anyOf.at(i)) != std::string::npos){
            return true;
        }
    }
    return false;
}

bool ID_Functions::IsValidID (const std::string userID) {

    for (unsigned int i = 0; i < userID.size(); ++i){

        if (!(userID.size() <= 10)){ // 5 - 10 characters long.
            return false;
        }

        if (!(userID.size() >= 5)){ // 5 - 10 characters long.
            return false;
        }

        if (!(ContainsAnyOf ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", userID.substr(0, 1)))){ // Must begin with a letter.
            return false;
        }

        if (!(ContainsAnyOf ("ABCDEFGHIJKLMNOPQRSTUVWXYZ", userID))){ // Must contain at least one upper case letter
            return false;
        }

        if (!(ContainsAnyOf ("abcdefghijklmnopqrstuvwxyz", userID))){ // Must contain at least one lower case letter.
            return false;
        }

        if (!(ContainsAnyOf ("#_$", userID))){ // Must contain at least one decimal digit.

            return false;
        }

        if (!(ContainsAnyOf ("1234567890", userID))){ // Must contain at least one of the following special characters: #_$
            return false;
        }

        if (!(ContainsAnyOf ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890#_$", userID.substr(i, 1)))){ // Must not contain any other characters than those specified above
            return false;
        }
    }

    return true;

}
