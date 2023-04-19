#pragma once
#include "state.h"
#include "gumballmachine.h"
#include <ctime>
class GumballMachine;

class HasQuarterState : public State {
private:
    GumballMachine* gumballMachine;
public:
    HasQuarterState(GumballMachine* gumballMachine);
    ~HasQuarterState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    string toString();
};