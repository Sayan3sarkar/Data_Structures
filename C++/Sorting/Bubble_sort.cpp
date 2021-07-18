/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void B_sort(vector <int> arr){
    int i, j, temp, n = arr.size();
    for(i = 1; i< n; i++){
        for(j = 0; j< n - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(auto& it: arr)
        cout << it << ' ';
}

void B_sort_improved(vector <int> arr){
    int i = 1, j, temp, n = arr.size(), flag = 1; // flag = 0 indicates no swapping happened in current iteration/pass
    while((i<n) && flag){
        flag = 0;
        for(j = 0; j< n - i; j++){
            if(arr[j] > arr[j+1]){
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(auto& it: arr)
        cout << it << ' ';
}

int main()
{
    vector <int> arr{8,5,7,3,2};
    
    // B_sort(arr);
    B_sort_improved(arr);

    return 0;
}
// Time Complexity: O(n^2)