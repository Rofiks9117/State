#pragma once
#include "state.h"
#include "gumballmachine.h"
class GumballMachine;

class SoldOutState : public State {
private:
    GumballMachine* gumballMachine;
public:
    SoldOutState(GumballMachine* gumballMachine);
    ~SoldOutState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    string toString();
};

