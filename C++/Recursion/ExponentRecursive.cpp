/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>

using namespace std;

int exponentialRecursive(int m, int n){
    if(n == 0)
        return 1;
    return m*exponentialRecursive(m, n-1);
}

int exponentialRecursiveOptimised(int m, int n){
    if(n == 0)
        return 1;
    if(n%2 == 0)
        return exponentialRecursiveOptimised(m*m, n/2);
    else
        return m*exponentialRecursiveOptimised(m*m, (n-1)/2);
}

int main()
{
    cout << exponentialRecursiveOptimised(2,10);
    return 0;
}
