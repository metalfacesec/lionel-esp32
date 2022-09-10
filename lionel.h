#ifndef Lionel_h
#define Lionel_h

#include "BLEDevice.h"

class Lionel
{
  public:
    Lionel(std::string serialUUID);
  private:
    BLEUUID* serialUUID;
    BLEUUID* charUUID;
};

#endif
