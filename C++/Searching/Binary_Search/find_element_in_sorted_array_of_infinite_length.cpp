/******************************************************************************

                              Code by Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

// Binary Search Ascending
int BS_Ascending(vector <int> arr, int item, int start, int end){
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(item == arr[mid])
            return mid;
        else if(item < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int find_element_in_sorted_array_of_infinite_length(vector <int> arr, int target){
    int n = arr.size();
    if(n==1){
        if(arr[0] == target)
            return 0;
        return -1;
    }
    
    int start = 0, end = 1;
    while(target > arr[end]){
        start = end;
        end *= 2;
    }
    return BS_Ascending(arr, target, start, end);
}

int main()
{
    vector <int> arr{2,4,6,8,10};
    
    cout << find_element_in_sorted_array_of_infinite_length(arr, 10);

    return 0;
}
