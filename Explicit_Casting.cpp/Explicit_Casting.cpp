#include <iostream>
using namespace std;
int main ()
{
    float myFloat = 10.123;
    myFloat = static_cast<int>(myFloat);
    cout<<myFloat;
    return 0;
}
    