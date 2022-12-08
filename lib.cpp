//
// Created by Andrea Chiappini on 08/12/22.
//

#include "lib.h"

bool control (char & x) {
    if (x >= 97 && x <= 122) {
        x=x-32;
        return true;
    } else if (x >= 65 && x <= 90) {
        x=x+32;
        return true;
    }
    return false;
}
