#include <string>
#include "Address.h"

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person {
  public:
    Person(string n);
    void printDetails();
    ~Person();
  private:
    string name;
    Address *address;
};

#endif