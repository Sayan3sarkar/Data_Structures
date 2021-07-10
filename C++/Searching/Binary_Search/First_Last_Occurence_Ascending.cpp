/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int First_Occurence(vector <int> arr, int item){
    int start = 0, end = arr.size() - 1, res = -1, mid;
    while(start<=end){
        mid = start + (end - start)/2;
        if(item == arr[mid]){
            res = mid;
            end = mid - 1;
        }
        else if(item < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return res;
}

int Last_Occurence(vector <int> arr, int item){
    int start = 0, end = arr.size() - 1, res = -1, mid;
    while(start<=end){
        mid = start + (end - start)/2;
        if(item == arr[mid]){
            res = mid;
            start = mid + 1;
        }
        else if(item < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return res;    
}

int main()
{
    vector <int> arr1{2,4,10,10,10,18,20};
    
    cout << First_Occurence(arr1, 10);
    cout << Last_Occurence(arr1,10);
    

    return 0;
}