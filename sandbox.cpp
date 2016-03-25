#include <iostream>
#include <cmath>
#include <stdio.h>
#include <windows.h>
#include "sandbox.h"
using namespace std;



sandbox::sandbox()
{
    ClearScreen();
    cout << "We have now entered the sandbox..." << endl;
}

MathClass::MathClass()
{
    current = 0;
}



double MathClass::MCAdd(double x)
{
    cout << "Value to add: ";
    double temp;
        cin >> temp;
    current = x + temp;
    return current;
}

double MathClass::MCDiv(double x)
{
    cout << "Value to divide: ";
    double temp;
        cin >> temp;
    current = x / temp;
    return current;

}

double MathClass::MCSub(double x)
{
    cout << "Value to subtract: ";
    double temp;
        cin >> temp;
    current = x - temp;
    return current;
}

double MathClass::MCMult(double x)
{
    cout << "Value to multiply: ";
    double temp;
        cin >> temp;
    current = x * temp;
    return current;

}

double MathClass::MCPow(double x)
{
    double input = 0;
    cout << "Current Number: " << x << endl;
    cout << "Power to raise to: ";
        cin >> input;
    current = pow(x,input);
    return current;

}

void MathClass::MCExit()
{
    ClearScreen();
    cout << "Thank you for using the Class version of this function!" << endl;
    cout << "The final value of your math was: " << current << endl;
}

void MathClass::SetCurrent()
{
    cin >> current;
}

double MathClass::SendCurrent()
{
    return current;
}

void MathClass::ChangeCurrent(double x)
{
    current = x;
}

void signLoop(float x)
{
    ClearScreen();
    cout << "Current Value: " << x << endl;
    cout << "Choose an operation:" << endl;
    cout << "1 - Addition (+)" << endl;
    cout << "2 - Subtraction (-)" << endl;
    cout << "3 - Multiplication (*)" << endl;
    cout << "4 - Division (/)" << endl;
    cout << "5 - Power (^)" << endl;
    cout << "6 - Exit Program" << endl;
        int select = 0;
        cout << "Choice : ";
        cin >> select;
    switch(select)
    {
        case 1:
            functionSum(x);
            break;
        case 2:
            functionDiff(x);
            break;
        case 3:
            functionMult(x);
            break;
        case 4:
            functionDiv(x);
            break;
        case 5:
            functionPow(x);
            break;
        case 6:
            endProgram(x);
            break;
        default:
            cout << "You have not entered a valid selection.  Please choose again.";
            signLoop(x);
    }

}

int endProgram(float x)
{
    ClearScreen();
    cout << "Thank you for running this math program via function loops." << endl;
    cout << "The final value of your calculations was: " << x << endl;
    Pause();
    return 0;
}

void functionSum(float x)
{
    float input = 0;
    cout << "Current Number: " << x << endl;
    cout << "Value to add: ";
        cin >> input;
    x += input;
    signLoop(x);
}

void functionDiff(float x)
{
    float input = 0;
    cout << "Current Number: " << x << endl;
    cout << "Value to subtract: ";
        cin >> input;
    x -= input;
    signLoop(x);
}

void functionMult(float x)
{
    float input = 0;
    cout << "Current Number: " << x << endl;
    cout << "Value to multiply by: ";
        cin >> input;
    x *= input;
    signLoop(x);
}

void functionDiv(float x)
{
    float input = 0;
    cout << "Current Number: " << x << endl;
    cout << "Value to divide by: ";
        cin >> input;
    x /= input;
    signLoop(x);
}

void functionPow(float x)
{
    float input = 0;
    cout << "Current Number: " << x << endl;
    cout << "Power to raise to: ";
        cin >> input;
    x = pow(x,input);
    signLoop(x);
}

void ClearScreen()
{
    cout << string(50, '\n') << endl;
}

void Pause()
{
        system("pause");
}
