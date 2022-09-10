#include "BLEDevice.h"

#include "Lionel.h"

Lionel::Lionel(std::string serialUUID)
{
  this->serialUUID = new BLEUUID(serialUUID);
  this->charUUID = new BLEUUID("08590f7e-db05-467e-8757-72f6faeb13d4");
}
