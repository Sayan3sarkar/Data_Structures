/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

// Almost sorted or nearly sorted is defined as: An element which could have been in index i of sorted array, is present at
// either of index i-1, i, i+1 of unsorted array

int Search_Almost_Sorted_Array(vector <int> arr, int target){
    int n = arr.size();
    int start = 0, end = n - 1, mid;
    
    while(start<=end){
        mid = start + (end - start)/2;
        if(target == arr[mid])
            return mid;
        else if((mid - 1 >= start) && (arr[mid - 1] == target))
            return mid - 1;
        else if((mid + 1 <= end) && (arr[mid + 1] == target))
            return mid + 1;
        else if(target <= arr[mid])
            start = mid + 2;
        else
            end = mid - 2;
    }
}


int main()
{
    vector <int> arr1{5,10,30,20,40};
    
    cout << Search_Almost_Sorted_Array(arr1, 20);

    return 0;
}