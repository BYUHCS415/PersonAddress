#include <string>
#include <iostream>
#include "Address.h"

using namespace std;

Address::Address(string street, string city) {
  Address::street = street;
  Address::city = city;
}

void Address::printAddress() {
  cout << "Address: " << street << "," << city << endl;
}