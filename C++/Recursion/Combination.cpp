/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>

using namespace std;

//nCr = n!/(r!*(n-r)!)

// Factorial approach, unoptimised
int fact(int n){
    if(n==0 || n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return n*fact(n-1);
}

int Combination(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}


// Optimized solution using Pascal's triangle approach
int Combination_Optimized(int n, int r){
    if(r==0 || n==r)
        return 1;
    return Combination_Optimized(n-1,r-1) + Combination_Optimized(n-1,r);
}

int main()
{
    cout << Combination(4,2)<<"\n";
    cout << Combination_Optimized(4,2);

    return 0;
}
