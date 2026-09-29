#include <iostream>
#include <string>

#include "Person.h"
#include "Address.h"

using namespace std;

int main() {
  cout << "Hello Class" << endl;
  int *nums = new int[50];
  nums[5] = 25;
  cout << "Nums[5] = " << 25 << endl;

  Person peter("Peter");
  peter.printDetails();

  Person *bob = new Person("Bob");
  bob->printDetails();

  Address *adr1 = new Address("Kulanui","Laie");
  adr1->printAddress();


  delete bob;
  delete nums;
  delete adr1;
}