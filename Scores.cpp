#include <iostream>
using namespace std;
int main()
{
    string name, lastName;
    float x, y, z, ave;
    cout << "Enter you'r name & last name: ";
    cin >> name >> lastName;
    cout << "Enter you'r 3 scores: ";
    cin >> x >> y >> z;
    ave = (x+y+z)/3;
    if (ave >= 17)
        cout << "Great" << endl;
    else if (ave < 17 && ave >= 12)
        cout << "Normal" << endl;
    else if (ave < 12)
        cout << "Fail" << endl;
}