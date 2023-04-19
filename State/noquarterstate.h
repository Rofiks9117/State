#pragma once
#include "state.h"
#include "gumballmachine.h"
class GumballMachine;

class NoQuarterState : public State {
private:
    GumballMachine* gumbalMachine;
public:
    NoQuarterState(GumballMachine* gumbalMachine);
    ~NoQuarterState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    string toString();
};

