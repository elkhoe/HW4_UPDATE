//
// Created by mfbut on 1/20/2018.
//

#ifndef HOARDINGCPPVERSION_SPACE_H
#define HOARDINGCPPVERSION_SPACE_H

#include <memory>
#include <vector>

#include "CSVReader.h"
#include "Rules.h"

#include "Go.h"
#include "Property.h"

namespace Monopoly {
  class Player;
  class GameState;
  enum class SpaceType { goSpace, propertySpace, GotoJailSpace, JailSpace, FreeParkingSpace, PayBankSpace };

  class Space {
   public:
    static unsigned long length_of_longest_space_name;
    Space(CSVReader& boardFile, const int spaceNumber, GameState& gameState);
    int getSpaceNumber() const;
    void display() const;
    const std::string& getName() const;
    void addPlayer(Player& player);
    void removePlayer(const Player& player);
    void removeAllPlayers();
    SpaceType getSpaceType() const;
    virtual void activate(Player& activatingPlayer) = 0;

    virtual int getSalary() const = 0;
    int getCost() const;
    int getSetId() const;
    int getIntraSetId() const;
    int getBasicRent() const;

   private:
    SpaceType spaceType;
    std::unique_ptr<Go> goPtr;
      std::unique_ptr<FreeParking> freeParking;
      std::
    std::unique_ptr<Property> propertyPtr;
    std::vector<Player*> playersOnSpace;
    int spaceNumber;
    GameState& gameState;
  };
}

#endif //HOARDINGCPPVERSION_SPACE_H
