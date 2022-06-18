#include <iostream>
#include <cmath>
#include <float.h>
using namespace std;


class bst
{
public:
	int value=99;
	int left;
	bst *right;
    bst & insert(int val);
};

 
int main(){
bst bs;
   int bb=99;
   int *t=bb;

 cout << t->bs.left << endl;

	return 0;
}
