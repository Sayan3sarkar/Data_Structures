/******************************************************************************

                              Code by Sayan3sarkar

*******************************************************************************/

/******************************************************************************

Algo:
1. In Regular Binary Search, if target element is found, the element/index of element is returned.
2. If not found, at the end of the loop, the target element must be withing the range of the final values of arr[start] and arr[end]
3. Compute abs(arr[start]-target) & abs(arr[end] - target). If the former is smaller, arr[start] is returned else arr[end] is returned

*******************************************************************************/

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int Min_Diff_in_sorted_array(vector <int> arr, int item){
    int start = 0, end = arr.size() - 1, mid;
    
    while(start<=end){
        mid = start + (end - start)/2;
        if(item == arr[mid])
            return arr[mid];
            
        else if(item < arr[mid])
            end = mid - 1;
            
        else
            start = mid + 1;
    }
    
    int res1 = abs(arr[start] - item);
    int res2 = abs(arr[end] - item);
    return ((res1 < res2) ? arr[start] : arr[end]);
}

int main()
{
    vector <int> arr{2,4,6,8,10,15};
    
    cout << Min_Diff_in_sorted_array(arr, 13);

    return 0;
}
