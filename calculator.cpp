#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double a , b;
    string operand;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;
    cout << "Enter Operand: ";
    cin >> operand;

    if (operand == "+")
        cout << "Result: " << a+b;
    else if (operand == "-")
        cout << "Result: " << a-b;
    else if (operand == "*")
        cout << "Result: " << a*b;
    else if (operand == "/")
    {
        if (b != 0)
            cout << "Result: " << a/b;
        else
            cout << "Division by zero!";
    }
    else if (operand == "Rad")
        cout << "Result: " << sqrt(a);

    else if (operand == "fact")
    {
        double fact =1;
        for (long int i = 1; i <= a ; i++)
        {
            fact *= i;
        }
        cout << "Result: " << fact;
    }
    else if (operand == "cos")
    {
        a = a * M_PI / 180;
        cout << "Result: " << cos(a);
    }

    else if (operand == "tan")
    {
        a = a * M_PI / 180;
        cout << "Result: " << tan(a);
    }

    else if (operand == "cot")
    {
        a = a * M_PI / 180;
        double t = tan(a);
        cout << "Result: " << 1/t;
    }

    
    return 0;
}
