/******************************************************************************

                              Code By Sayan3sarkar

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void Insertion_sort(vector <int> a){
    int i, j, n = a.size(), key;
    for (i = 1; i < n; i++)
	{
		key = a[i];
		for(j = i-1; (j>= 0) && (a[j]>key); j--)
			a[j+1] = a[j]; // Shift
		a[j+1] = key; // Insetion
	}
    
    for(auto& it: a)
        cout << it << " ";
}

int main()
{
    vector <int> arr{8,5,7,3,2};
    
    Insertion_sort(arr);

    return 0;
}
