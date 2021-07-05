/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>

using namespace std;

// Taylor series: (e^x) = 1 + (x/1!) + (x^2 / 2!) + ... + (x^n / n!)

// Recursive approach to taylor series.Time Complexity: O(n^2)
double e(int x, int n){
    static double p=1, f=1; // Static variables holding initial values for power and factorial variables
    double result;
    if(n==0)
        return 1;
    else {
        result = e(x,n-1);
        p*=x;
        f*=n;
        return result + (p/f);
    }
}

// Taylor series using Horner's Rule, iterative approach. Time Complexity: O(n)
double e_horner_iter(double x, double n){
    double s=1;
    if(n==0)
        return 1;
    while(n>0){
        s = 1 + s*(x/n);
        n--;
    }
    return s;
}

// Taylor series using Horner's Rule, Recursive approach. Time Complexity: O(n)
double e_horner_recursive(double x, double n){
    static double s=1;
    if(n==0)
        return s;
    s = 1 + s*(x/n);
    return e_horner_recursive(x, n-1);
}

int main()
{
    cout << e_horner_recursive(3,10)<<"\n";
    cout << e_horner_iter(3,10)<<"\n";
    cout << e(3,10);

    return 0;
}
