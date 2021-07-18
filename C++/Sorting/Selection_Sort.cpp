/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void Selection_sort(vector <int> arr){
    int i, j, temp, n = arr.size(), min;
    for(i = 0; i < n- 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[min])
                min = j;
        }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
    }
    
    for(auto& it: arr)
        cout << it << " ";
}

int main()
{
    vector <int> arr{8,5,7,3,2};
    
    Selection_sort(arr);

    return 0;
}
