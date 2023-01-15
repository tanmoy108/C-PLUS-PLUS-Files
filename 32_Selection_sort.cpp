//Selection sort in array
/*Complexity = O(n^2)
we can analyze the complexity by simply observing the number of loops. There are 2 loops so the complexity is n*n = n^2.

Time Complexities:
Worst Case Complexity: O(n^2)
If we want to sort in ascending order and the array is in descending order then, the worst case occurs.
Best Case Complexity: O(n^2)
It occurs when the array is already sorted
Average Case Complexity: O(n^2)
It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

The time complexity of the selection sort is the same in all cases. At every step, you have to find the minimum element and put it in the right place. The minimum element is not known until the end of the array is not reached.

Space Complexity:
Space complexity is O(1) because an extra variable temp is used.*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={16,11,23,22,51,34,73,2};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }

}
