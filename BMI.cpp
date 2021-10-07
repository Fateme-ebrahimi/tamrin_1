#include <iostream>
using namespace std;
int main()
{
    float height , weight , BMI;
    cout << "height in Meters: ";
    cin >> height ;
    cout << "weight in KG: ";
    cin >> weight ;
    BMI = weight / (height * height);
    if (BMI < 18.5)
        cout << "UNDERWEIGHT" << endl;
    else if (BMI >= 19 && BMI < 24.9)
        cout << "NORMAL" << endl;
    else if (BMI >= 25 && BMI < 29.9)
        cout << "OVERWEIGHT" << endl;
    else if (BMI >= 30 && BMI < 34.9)
        cout << "OBESE" << endl;
    else if (BMI >= 35)
        cout << "EXTREMELY OBESE" << endl;
    return 0;
}