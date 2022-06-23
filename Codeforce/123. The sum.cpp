#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
     double a, b;
     
     cin>>a>>b;
     a=abs(a);
     b=abs(b);
     cout << (pow(a, b)-pow(b, a)) << endl;
     
     return 0;
}
