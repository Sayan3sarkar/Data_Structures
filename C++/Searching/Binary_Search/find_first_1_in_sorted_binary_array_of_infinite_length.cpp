/******************************************************************************

                              Code by Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int First_Occurence_BS(vector <int> arr, int item, int start, int end){
    int mid, res = -1;
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

// This algo is combination of (First occurence in sorted array) and (Find first occurence in sorted array of infinite length)
int find_first_1_in_sorted_binary_array_of_infinite_length(vector <int> arr, int target){
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
    return First_Occurence_BS(arr, target, start, end);
}

int main()
{
    vector <int> arr{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1};
    
    cout << find_first_1_in_sorted_binary_array_of_infinite_length(arr, 1);

    return 0;
}
