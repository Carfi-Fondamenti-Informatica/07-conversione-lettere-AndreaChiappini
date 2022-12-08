#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char x=0;
    cin >> x;
    if (control(x)){
        cout << x << endl;
    } else {
        cout << "errore" << endl;
    }
    return 0;
}
