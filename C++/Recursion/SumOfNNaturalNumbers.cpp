/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>

using namespace std;

int sumOfNNaturalNumbers(int n){
    if(n > 1)
        return sumOfNNaturalNumbers(n-1) + n;
    else
        return 1;
}

int main()
{
    cout<< sumOfNNaturalNumbers(19);
    return 0;
}
//Output: 190 for n=19
// Time Complexity: O(n)