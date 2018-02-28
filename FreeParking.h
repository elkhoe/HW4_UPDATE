#ifndef HOARDINGCPPVERSION_FREEPARKING_H
#define HOARDINGCPPVERSION_FREEPARKING_H
#include <vector>
#include <string>




  class FreeParking : public Space {
   public:
      virtual void activate(Player& activatingPlayer);

   protected:

   private:
      std::unique_ptr<FreeParking> freeParkingPtr;

  };


#endif //HOARDINGCPPVERSION_FREEPARKING_H
