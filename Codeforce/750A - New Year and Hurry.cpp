/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : EBRAHIM MOHAMMAD SALEH
            Department of CEP, SUST, Bangladesh.

***/

#include <bits/stdc++.h>
 
using namespace std;


int main ()
{
    int problem, min, solved=0;
    int totall_time=0;   
    cin>>problem>>min;
    
	int sum=0;
    totall_time=240-min;
   
   for(int i=1; i<=problem; i++){
     sum += 5 * i;
     if(sum >totall_time){
		 return 0;
	 }else{
		 solved+=1;
	 }
   }
    
    cout<<solved;
    return 0;
}
