//34. insertion sort
/*
Time Complexities:

Worst Case Complexity: O(n2)
Suppose, an array is in ascending order, and you want to sort it in descending order. In this case, worst case complexity occurs.
Each element has to be compared with each of the other elements so, for every nth element, (n-1) number of comparisons are made.
Thus, the total number of comparisons = n*(n-1) ~ n2

Best Case Complexity: O(n)
When the array is already sorted, the outer loop runs for n number of times whereas the inner loop does not run at all. So, there are only n number of comparisons. Thus, complexity is linear.

Average Case Complexity: O(n2)
It occurs when the elements of an array are in jumbled order (neither ascending nor descending).

Space Complexity
Space complexity is O(1) because an extra variable key is used.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={12,45,23,51,19,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int temp;
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }

}
