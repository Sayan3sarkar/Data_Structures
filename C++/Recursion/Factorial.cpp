/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>

using namespace std;

int fact(int n){ // Recursive Solution
    if(n==0 || n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return n*fact(n-1);
}

int fact_iter(int n){ // Iterative solution
    int result = 1;
    for(int i=n; i>=1; i--){
        result *= i;
    }
    return result;
}

int main()
{
    cout << fact(6);
    return 0;
}
// Time Complexity: O(n)