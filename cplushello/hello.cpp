#include <iostream>
#include "pico/stdlib.h"

using namespace std;

int main() {
    setup_default_uart();
    cout << "Hello World!" << endl;
    return 0;
}

