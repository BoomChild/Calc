#include <iostream>
#include <cmath>
#include <stdio.h>
#include <windows.h>
#include "sandbox.h"

using namespace std;
int ClassLoop(double x);
MathClass MC;

int main()
{
    int selection = 0;
    float temp = 0;

    cout << "Please select which process you would like to follow" << endl;
    cout << "1 - Individual functions using loops" << endl;
    cout << "2 - Class based functions" << endl;
    cout << "3 - Pointers and value swapping" << endl;
    cout << "4 - Exit Program" << endl;
    cout << "Choice: ";
        cin >> selection;

    switch(selection){
        case 1:
            ClearScreen();
            cout << "Moving to: Individual Functions & Loops" << endl;
            cout << "Please enter your initial value: ";
                cin >> temp;
            signLoop(temp);
            break;

        case 2:
            ClearScreen();
            cout << "Please enter your initial value: ";
                MC.SetCurrent();
            ClassLoop(MC.SendCurrent());
            break;

        case 3:
            ClearScreen();
            cout << "This function has not been enabled yet." << endl;
            Pause();
            return 0;
            break;

        case 4:
            ClearScreen();
            cout << "Thank you for using this math program." << endl;
            Pause();
            return 0;
            break;

        default:
            ClearScreen();
            cout << "That option is not valid.  Please select from the list below: " << endl;
                main();
    }



}

int ClassLoop(double x)
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
        cout << "Choice: ";
        cin >> select;
    switch(select)
    {
        case 1:
            MC.MCAdd(x);
            ClassLoop(MC.SendCurrent());
            break;
        case 2:
            MC.MCSub(x);
            ClassLoop(MC.SendCurrent());
            break;
        case 3:
            MC.MCMult(x);
            ClassLoop(MC.SendCurrent());
            break;
        case 4:
            MC.MCDiv(x);
            ClassLoop(MC.SendCurrent());
            break;
        case 5:
            MC.MCPow(x);
            ClassLoop(MC.SendCurrent());
            break;
        case 6:
            MC.MCExit();
            Pause();
            return 0;
            break;
        default:
            cout << "You have not entered a valid selection.  Please choose again.";
            ClassLoop(x);
    }
    return 0;
}
