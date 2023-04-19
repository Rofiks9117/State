#pragma once
#include <iostream>
#include <String>
#include "state.h"
#include "soldoutstate.h"
#include "noquarterstate.h"
#include "hasquarterstate.h"
#include "soldstate.h"
#include "winnerstate.h"
using namespace std;

class GumballMachine {
private:
    State* soldOutState;
    State* noQuarterState;
    State* hasQuarterState;
    State* soldState;
    State* winnerState;
    State* state;
    int count;
public:
    GumballMachine(int numberGumballs);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State* state);
    void releaseBall();
    int getCount();
    void refill(int count);
    State* getState();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    State* getWinnerState();
    string toString();
};