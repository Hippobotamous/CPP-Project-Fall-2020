#ifndef SETANIMALSCLASS_H_INCLUDED
#define SETANIMALSCLASS_H_INCLUDED

#include<string>
using namespace std;

class SetAnimals : public Animals { // SetAnimals class inherits from Animals class that has four variables to store animal names
public:
  string setgetAnimal1() { animal1 = "Alpaca"; return animal1; }
  string setgetAnimal2() { animal2 = "Goat"; return animal2; }
  string setgetAnimal3() { animal3 = "Puma"; return animal3; }
  string setgetAnimal4() { animal4 = "Frog"; return animal4; }
  string setgetTie() { tie = "Blobfish"; return tie; }
};

#endif // SETANIMALS_H_INCLUDED
