#include "noquarterstate.h"

NoQuarterState::NoQuarterState(GumballMachine* gumbalMachine) {
    this->gumbalMachine = gumbalMachine;
}

NoQuarterState::~NoQuarterState() {

}

void NoQuarterState::insertQuarter() {
    cout << "You inserted a quarter" << endl;
    gumbalMachine->setState(gumbalMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
    cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank() {
    cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::dispense() {
    cout << "You need to pay first" << endl;
}

string NoQuarterState::toString() {
    return "waiting for quarter";
}
