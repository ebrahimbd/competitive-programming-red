#include <iostream>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int i=0;
void a(){
    cout<<i << "\n";
    if (i>=100){
    return;
    }
   i+=1;
   a();
}

int main() {
  for (int i = 0; i < 1; i++) {
    cout << i << "\n";
    a();
  }
  return 0;
}

