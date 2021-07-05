/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>

using namespace std;

void TOH(char a, char b, char c, int n){
    if(n==1)
        cout << a << " -> "<< c<<"\n";
    else {
        TOH(a,c,b,n-1);
        TOH(a,b,c,1);
        TOH(b,a,c,n-1);
    }
}

int main()
{
    TOH('A','B','C', 3);

    return 0;
}
// Time Complexity: O(2^n)