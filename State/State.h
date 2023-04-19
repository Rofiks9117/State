#pragma once
#include <string>
using namespace std;
class State {
public:
    virtual ~State() {}
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
    virtual string toString() = 0;
};
