#include <iostream>
using namespace std;
int main () 
{
    int x, y, z;
    cout << "Enter your numbers: ";
    cin >> x >> y >> z;
    if (x < y + z && y < x + z && z < x + y)
        cout << "Correct!" << endl;
    else
        cout << "Wrong!" << endl;

    return 0;
}