#include <iostream>
#include "color.h"

using namespace std;

int main() {
    Color red("red");
    Color green("green");

    Color yellow = mixColor(red, green);

    red.display();
    cout << "+" << endl;
    green.display();
    cout << "=" << endl;
    yellow.display();

    return 0;
}
