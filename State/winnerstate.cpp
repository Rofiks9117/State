#include "winnerstate.h"

WinnerState::WinnerState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
}

WinnerState::~WinnerState() {

}

void WinnerState::insertQuarter() {
    cout << "Please wait, we're already giving you a gumball" << endl;
}

void WinnerState::ejectQuarter() {
    cout << "Sorry, you already turned the crank" << endl;
}

void WinnerState::turnCrank() {
    cout << "Turning twice doesn't get you another gumball!" << endl;
}

void WinnerState::dispense() {
    cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << endl;
    gumballMachine->releaseBall();
    if (gumballMachine->getCount() == 0) {
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
    else {
        gumballMachine->releaseBall();
        if (gumballMachine->getCount() > 0) {
            gumballMachine->setState(gumballMachine->getNoQuarterState());
        }
        else {
            cout << "Oops, out of gumballs!" << endl;
            gumballMachine->setState(gumballMachine->getSoldOutState());
        }
    }
}

string WinnerState::toString() {
    return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
}
