/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <cstring>
#define N 102

using namespace std;

int t[N];

// Recursive unoptmised solution. Time Complexity: O(2^n)
int fibonacci_recursive(int n){
    if(n<=1)
        return n;
    else
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

// Memoised Solution(Dynamic Programming - Top Down). Time Complexity:O(n)
int fibonacci_memoized(int n){
    if(t[n]!=-1)
        return t[n];
    else if(n<=1)
        t[n]=n;
    else
        t[n]=fibonacci_memoized(n-1)+fibonacci_memoized(n-2);
        
    return t[n];
}

// Tabulation Solution(Dynamic Programming - Bottom Up). Time Complexity:O(n)
int fibonacci_tabulation(int n){
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
        
    return f[n];
}

int main()
{
    // Initialising global array t for Memoized solution
    for(int i=0;i<N;i++)
        t[i] = -1;
    cout << fibonacci_recursive(8)<<"\n";
    cout << fibonacci_memoized(8)<<"\n";
    cout << fibonacci_tabulation(8);

    return 0;
}
