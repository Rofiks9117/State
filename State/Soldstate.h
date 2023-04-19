#pragma once
#include "state.h"
#include "gumballmachine.h"

class GumballMachine;

class SoldState : public State {
private:
    GumballMachine* gumballMachine;
public:
    SoldState(GumballMachine* gumballMachine);
    ~SoldState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    string toString();
};

