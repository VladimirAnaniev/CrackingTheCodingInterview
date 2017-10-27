//
// Created by vladimir on 27/10/17.
//

#include <algorithm>
#include <cstring>
#include "Strings.h"


bool Strings::areAllCharsUnique(std::string str) const {
    // Sort the string -> O(n*log(n))
    std::sort(str.begin(), str.end());

    // if two successive chars are the same-> string is not unique
    char last;
    for(char c : str) {
        if(c == last) {
            return false;
        }
        last = c;
    }

    return true;
}

char* Strings::reverseCStr(char *str) const {
    auto length = strlen(str);

    for(int i = 0; i < length/2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    return str;
}

std::string Strings::removeDuplicates(std::string str) const {
    
}