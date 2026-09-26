#include <iostream>
#include <string>

using namespace std;

class Person {
  public:
    Person(string n);
    void printDetails();
  private:
    string name;
    string address;
};

Person::Person(string n) {
  name = n;
  address = "Unknown";
}

void Person::printDetails() {
  cout << "Name: " << name << endl;
  cout << "Address: " << address << endl;
}


int main() {
  cout << "Hello Class" << endl;
  int *nums = new int[50];
  nums[5] = 25;
  cout << "Nums[5] = " << 25 << endl;

  Person peter("Peter");
  peter.printDetails();

  Person *bob = new Person("Bob");
  bob->printDetails();

  delete bob;
  delete nums;
}