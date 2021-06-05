#include<iostream>
using namespace std;

int main()
{
    long a,b;
    char op;
    long long int res=0;

    cout << "Enter first number:- \n";
    cin >> a;

    cout << "Enter an operator (+,-,*,/,%):- \n";
    cin >> op;

    cout << "Enter second number:- \n";
    cin >> b;

    switch(op)
    {
        case '+':
        {
            cout << "\nYou choose Addition.\n";
            res=a+b;
            cout << "Result is: " <<res<<endl;
            break;
        }
        case '-':
        {
            cout << "\nYou choose Subtraction.\n";
            res=a-b;
            cout << "Result is: " <<res<<endl;
            break;
        }
        case '*':
        {
            cout << "\nYou choose Multiplication.\n";
            res=a*b;
            cout << "Result is: " <<res<<endl;
            break;
        }
        case '/':
        {
            cout << "\nYou choose Division.\n";
            res=a/b;
            cout << "Result is: " <<res<<endl;
            break;
        }
        case '%':
        {
            cout << "\nYou choose Modulus.\n";
            res=a%b;
            cout << "\nResult is: " <<res<<endl;
            break;
        }
        default:
        {
            cout << "\nPlease enter a valid operator to do calculation.";
            break;
        }   
    }
    return 0;
}
