#include<string>

using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H

class Address {
  public:
    Address(string street,string city);
    void printAddress();
  private:
    string street;
    string city;
};

#endif