#ifndef SANDBOX_H
#define SANDBOX_H
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <windows.h>

using namespace std;


class sandbox
{
    public:
        sandbox();
    protected:
    private:
};

class MathClass
{
    public:
        MathClass();
        double MCAdd(double x);
        double MCSub(double x);
        double MCMult(double x);
        double MCDiv(double x);
        double MCPow(double x);
        void MCExit();
        void SetCurrent();
        void ChangeCurrent(double x);
        double SendCurrent();
    protected:
    private:
        double current;
};

void ClearScreen();
void signLoop(float x);
void functionDiff(float x);
void functionDiv(float x);
void functionMult(float x);
void functionSum(float x);
void functionPow(float x);
int endProgram(float x);
void Pause();


#endif // SANDBOX_H


