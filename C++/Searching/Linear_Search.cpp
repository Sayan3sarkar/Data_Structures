/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int LS(int arr[], int n, int item){
    for(int i=0;i<n;i++){
        if(item == arr[i])
            return i;
    }
    return -1;
}
// Time Complexity: For Successful search, Best Case = O(1) and worst case = O(n). For unsuccessfuk search, O(n)

int LS_improved(vector <int> arr, int item){
    int start = 0, end = arr.size() - 1, index = -1;
    while(start <= end){
        if(arr[start] == item){
            index = start;
            break;
        }
        if(arr[end] == item){
            index = end;
            break;
        }
        start ++;
        end --;
    }
    return index;
}
// Time Complexity: For Succesful search. Best Case=Worst Case = O(1). For unsuccesful search, O(n/2)

int main()
{
    int arr1[] = {79,4,5,23,726};
    vector <int> arr2{79,4,5,23,726};
    
    cout<<LS(arr1, 5, 23)<<'\n';
    cout<<LS_improved(arr2, 23);

    return 0;
}