#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Student {
  private:
    string grade;
    string name;
    string city;

  public: 
    void setClass(string cl) {
      grade = cl;
    }

    void setName(string nm) {
      name = nm;
    }

    void setCity(string ct) {
      city = ct;
    } 

    string getName() {
      return name;
    }

    string getClass() {
      return grade;
    }

    string getCity() {
      return city;
    }

    Student();    
};


Student:: Student() {

};

int main() {
  
  Student Pranay;
  
  Pranay.setName("Pranay Dubey");
  Pranay.setCity("Pune");
  Pranay.setClass("BCA graduate");


  cout << Pranay.getName() <<  " is a " << Pranay.getClass() << " and lives in " << Pranay.getCity() << endl;

  return 0;
}




