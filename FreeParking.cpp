#include "FreeParking.h"
#include <iostream>

virtual void activate(Player& activatingPlayer){
    activatingPlayer.giveCash(freeParkingPtr->getSalary() * (gameState.rules.getSalary_multiplier_for_landing_on_go() - 1));
}