/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

/*
Algo:
1. In Regular Binary Search, if target element is found, the element/index of element is returned.
2. If not found, at the end of the loop, the target element must be withing the range of the final values of arr[start] and arr[end]
3. So, floor of the element is arr[end] [since value of end becomes greater than value of start, so arr[end]>arr[start]]
*/
int floor_sorted_array(vector <int> arr, int target){
    int start = 0, end = arr.size() - 1, mid;
    
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(arr[mid] == target)
            return arr[mid];
        
        else if(arr[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    
    return arr[end];
}

int main()
{
    vector <int> arr{1,2,3,4,8,10,10,12,19};
    cout<<floor_sorted_array(arr, 5);

    return 0;
}

// Complicated Way
// int floor_sorted_array(vector <int> arr, int target){
//     int n = arr.size();
    
//     int start = 0, end = n - 1, mid, res = -1;
    
//     while(start <= end){
//         mid = start + (end - start)/2;
        
//         if(arr[mid] == target){
//             res = arr[mid];
//             break;
//         }
        
//         else if(arr[mid] < target){
//             res = arr[mid];
//             start = mid + 1;
//         }
//         else
//             end = mid - 1;
//     }
    
//     return res;
// }
