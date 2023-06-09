#include "hasquarterstate.h"

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
    srand(time(NULL));
}

HasQuarterState::~HasQuarterState() {

}

void HasQuarterState::insertQuarter() {
    cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter() {
    cout << "Quarter returned" << endl;
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    cout << "You turned..." << endl;
    int winner = rand() % 10;
    if (winner == 0 && gumballMachine->getCount() > 1) {
        gumballMachine->setState(gumballMachine->getWinnerState());
    }
    else {
        gumballMachine->setState(gumballMachine->getSoldState());
    }
}

void HasQuarterState::dispense() {
    cout << "No gumball dispensed" << endl;
}

string HasQuarterState::toString() {
    return "waiting for turn of crank";
}
