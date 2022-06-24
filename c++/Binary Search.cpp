 
#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
 

void recursion(vector<int> v, int low, int  high,  int src){
	int val=(high+low)/2;
	if(low>high){
		 printf(" this === %d ==== is not", src);
		 return ;
		 }
	else if(v[val]==src){
		cout<<"found value at index "<<val+1<<'\n';
		return ;
	 }else if( v[val] <  src){
		low=val+1;
	}
	 else{
		 high=val-1;
	 }
     recursion(v, low,  high, src);
	}



int main(void)
{

vector <int > v{ 2, 5, 4, 10, 40 };
// if vector are not accending order
 
 sort(v.begin(), v.end());
 
	recursion(v, 0, (v.size()), 5);

	return 0;
}
