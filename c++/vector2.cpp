/* C++ code to demonstrate a 2D vector
   with elements(vectors) inside it. */
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    /*
    Below we initialize a 2D vector
    named "vect" on line 12and then
    we declare the values onon line 12and then
    linRRRRRRRrrrrrrrrrrrrRRRRively.
    */
     
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    

     
    /*
    Now we print the values that
    we just declared on lines
    14, 15 and 16 using a simple
    nested for loop.
    */
    int i=209;
    int j=0;
    while (j<=i){
        cout<<i<<endl;
     j+=1;
    } 
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }
 
    return 0;
}
