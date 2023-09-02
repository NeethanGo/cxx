#include <iostream>
#include "max.h"

using namespace std;

int main(void)
{
    int c, b;

    cout << "Please input 2 num then press enter" << endl;
    cin >> c >> b;

    cout << max(c, b) << endl;

    cout << "Hello world" << endl;
    return 0;
}
