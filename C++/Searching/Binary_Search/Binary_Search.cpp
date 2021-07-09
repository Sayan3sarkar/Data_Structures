/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>

using namespace std;

// Binary Search Ascending
int BS_Ascending(int arr[], int n, int item){
    int start = 0, end = n-1, mid;
    while(start<=end){
        mid = start + (end-start)/2; // Improved version of mid = (start + end)/2. To prevent int overflow
        if(item == arr[mid])
            return mid;
        else if(item < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

// Binary Search Descending. Reverse Sorted Array
int BS_Descending(int arr[], int n, int item){
    int start = 0, end = n-1, mid;
    while(start<=end){
        mid = start + (end-start)/2; // Improved version of mid = (start + end)/2. To prevent int overflow
        if(item == arr[mid])
            return mid;
        else if(item < arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};
    
    cout<<BS_Ascending(arr1, 5, 2)<<'\n';
    cout<<BS_Descending(arr2, 5, 2);

    return 0;
}
// Time Complexity: O(log(base2) n)