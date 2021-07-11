/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int floor_sorted_array(vector <int> arr, int target){
    int n = arr.size();
    
    int start = 0, end = n - 1, mid, res = -1;
    
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(arr[mid] == target){
            res = arr[mid];
            break;
        }
        
        else if(arr[mid] < target){
            res = arr[mid];
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    
    return res;
}

int main()
{
    vector <int> arr{1,2,3,4,8,10,10,12,19};
    cout<<floor_sorted_array(arr, 5);

    return 0;
}
