#ifndef CAR_H
#endif CAR_H

#include <string>
#include "driver.h"

class SteeringWheel{
};


class Car{
    
  Driver *dere;
  SteeringWheel s_wheel;
  std::string car_type;

public:
  
  Car(Driver *driver = NULL) : Car(driver, "Mercedes") {
  }
  Car(Driver *driver = NULL,
      std::string ct) :
    dere(driver), car_type(ct){}
  std::string whosDriving();
};

#endif  