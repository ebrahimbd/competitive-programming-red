#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;
 
    void a(){
        for (int i=0; i<99; i++){
            cout<< i<<" ebrahim\n";
        }
    };
    // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";
  myObj.a();
  // Print values
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString; 
  return 0;
}

