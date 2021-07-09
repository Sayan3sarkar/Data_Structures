/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

/******************************************************************************

Algorithm to find element in a sorted array whose sorting order(Ascending/Descending) is unknown:

1. Find size of array
2. if(size == 1){
    if(item == arr[0])
        return 0;
    return -1;
}
3. if(size > 1){

    if(arr[0]<arr[1])
        return BS_Ascending(arr, n ,elem);
    else
        return BS_Descending(arr, n , elem);
    
    return -1;
}

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

// Order Agnostic Binary Search
int BS_Unknown(int arr[], int n, int item){
    if(n==1){
        if(arr[0] == item)
            return 0;
        return -1;
    }
    if(n>1){
        if(arr[0]<arr[1])
            return BS_Ascending(arr, n ,item);
        else
            return BS_Descending(arr, n , item);
    
    return -1;
    }
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};
    
    cout<<BS_Unknown(arr1, 5, 2)<<'\n';
    cout<<BS_Unknown(arr2, 5, 2);

    return 0;
}