/*
*    A Simple Calculator,
*    by Hussein M. Migadde
*
*/

#include<iostream>

using namespace std;

int main()
{
    float num1, num2,result;
    char oper;  // to chose operator (+,-,*,/)

    cout <<endl <<"||||||||||||||||||||||||||||||||||||||||||||||||||";
    cout <<endl <<"||||||||||||||||||||||||||||||||||||||||||||||||||";
    cout <<endl <<"         SIMPLE CALCULATOR ";
    cout <<endl <<"||||||||||||||||||||||||||||||||||||||||||||||||||";
    cout <<endl <<"||||||||||||||||||||||||||||||||||||||||||||||||||";

    cout << endl <<"Enter first number and press Enter : ";
    cin >> num1;
    

    cout << endl << "Operator to use \"+, -, *, /\" and press Enter: ";
    cin >> oper;
    
    cout << endl << "Enter Second number and press Enter: ";
    cin >> num2;

        switch (oper)
    {
    case '+':
        result = num1 + num2;
        break;
    
    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if(num2!=0)
        {result = num1 / num2;}
        else
            {
                cout << endl << "Cannot divide number by 0.";
                
            }
        break;    
    default:
        cout << endl << "Invalid Input.";
        
    }
    cout << endl << "\nResult of ["  << num1 << oper << num2  << "] is: "<< result;
    cout <<endl << "===================================";

    return 0;
}