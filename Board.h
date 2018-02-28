//
// Created by mfbut on 1/20/2018.
//

#ifndef HOARDINGCPPVERSION_BOARD_H
#define HOARDINGCPPVERSION_BOARD_H
#include <vector>
#include <string>
#include "Space.h"
#include "Rules.h"

namespace Monopoly {
  //class Space;
  class GameState;
  class Board {
   public:
    Board(const std::string& boardFileName, GameState& gameState);
    void display() const;
    Space& getSpace(int spaceNum);
    Space& getGoSpace();
    int getNumSpaces() const;
    const std::vector<std::unique_ptr<Space> getSpaces() const;// ??? right path?
    void removeAllPlayers();
  private:
      std::vector<std::unique_ptr<Space>
    unsigned long calc_length_of_longest_space_name() const;

  };
}

#endif //HOARDINGCPPVERSION_BOARD_H
