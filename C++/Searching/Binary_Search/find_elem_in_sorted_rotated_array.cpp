/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int find_min_index(vector <int> arr){
    
    int n = arr.size();
    
    // initial condition
    if(arr[0] < arr[n-1]){
		return 0;
	}

	int pivot = -1;
	int s = 0, e = n-1;
	while(s <= e){
	    
        if(arr[s] <= arr[e]){ // base condition
            return s;
        }
         
		int mid = s + (e-s)/2;
		int next = (mid + 1) % n;   // Enables next of last element to be the first element
		int prev = (mid -1 +n) % n; // Enables prev of first element to be the last element
		
		if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
              pivot = mid;
		      break;
		}
		
		if(arr[s] <= arr[mid]) //  if true, implies left of mid is sorted. So we search to the right of mid
            s = mid + 1;
            
		else if(arr[mid] <= arr[e]) //  if true, implies right of mid is sorted. So we search to the left of mid
		    e = mid - 1;

	}
   
	return pivot;
}

int BS_Ascending(vector <int> arr, int item, int start, int end){
    int n = arr.size();
    int mid;
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

int find_elem_in_sorted_rotated_array(vector <int> arr, int target){
    int n = arr.size();
    
    int index = find_min_index(arr);
    
    if(arr[index] == target)
        return index;
        
    int left_BS = BS_Ascending(arr, target, 0, index - 1);
    int right_BS = BS_Ascending(arr, target, index, n-1);
    if( left_BS != -1)
        return left_BS;
    else if( right_BS != -1)
        return right_BS;
    else
        return -1;
}

int main()
{
    vector <int> arr1{7,11,12,15,18,2,5,6};
    
    cout << find_elem_in_sorted_rotated_array(arr1, 15);

    return 0;
}