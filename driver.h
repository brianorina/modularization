#ifndef DRIVER_H
#define DRIVER_H

class Driver{
  std::string jina;
public:
  Driver(std::string name = "Dereva")
    : jina(name){}
  std::string getName(){ return jina; }
};

#endif

