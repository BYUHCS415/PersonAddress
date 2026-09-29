#include <string>
#include <iostream>
#include "Person.h"

using namespace std; 

Person::Person(string n) {
  name = n;
  address = new Address("Street","City");
}

void Person::printDetails() {
  cout << "Name: " << name << endl;
  address->printAddress();
}

Person::~Person() {
  cout << "Deleting: " << name << endl;
  delete address;
}
