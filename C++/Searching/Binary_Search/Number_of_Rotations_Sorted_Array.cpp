/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int count_rotations(vector <int> arr){
    
    int n = arr.size();
    
    // initial condition
    if(arr[0] < arr[n-1]){
		return 0;
	}

	int pivot = -1, s = 0, e = n-1;

	while(s <= e){
	    
        if(arr[s] <= arr[e]){ // base condition
            return s;
        }
         
		int mid = s + (e - s)/2;
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

int main()
{
    vector <int> arr1{7,11,12,15,18,2,5,6}; //  Expected O/P: 3. [Unrotated array would be 2,5,6,7,11,12,15,18 and is rotated left]
    
    cout << count_rotations(arr1);

    return 0;
}