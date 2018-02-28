//
// Created by mfbut on 1/20/2018.
//

#ifndef HOARDINGCPPVERSION_PLAYER_H
#define HOARDINGCPPVERSION_PLAYER_H
#include <string>
#include <map>

#include "Property.h"
#include "Space.h"
#include "PropertyManager.h"
#include "Rules.h"
#include "Move.h"

namespace Monopoly {
  class Player {
   public:
    static unsigned long length_of_longest_player_name;
    Player(int id, const std::string& name, int cash, Space* spaceOn, const PropertyManager& propertyManager);
    Player(const Player& player) = default;
    Space& getSpaceOn();
    virtual ~Player();

    void setOn(Space& space, bool activateSpace = true);
    void moveTo(Space& space, bool activateSpace = true);

    const std::string& getName() const;
    int getCash() const;
    void setCash(int cash);
    void giveCash(const int amount);

    void purchase(Property& property, const int amount);

    bool getBuyDecision(const Space& space) const;

    void payPlayer(Monopoly::Player& owner, const Property& propertyOn, const Rules& rules);
    bool ownsAllPropertiesInSet(const int setId) const;
    int getNetWorth() const;
    void refreshReferencesTo();
    Move getMove();

    std::vector<Property*> getUpgradeableProperties(const Rules& rules) const;
    std::vector<Property*> getDowngradeableProperties(const Rules& rules) const;
    void payBank(const int amount);

    void display();
    int getId() const;

   private:
    int id;
    std::string name;
    int cash;
    Move current_move;
    Space* spaceOn;
    PropertyManager propertyManager;

  };
}

#endif //HOARDINGCPPVERSION_PLAYER_H
