//33. bubble sort = Reapetedly swap two adjacent elements if they are in wrong order

/*
Complexity: O(n2)

Also, if we observe the code, bubble sort requires two loops. Hence, the complexity is n*n = n2

1. Time Complexities
Worst Case Complexity: O(n2)
If we want to sort in ascending order and the array is in descending order then the worst case occurs.
Best Case Complexity: O(n)
If the array is already sorted, then there is no need for sorting.
Average Case Complexity: O(n2)
It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

2. Space Complexity
Space complexity is O(1) because an extra variable is used for swapping.
In the optimized bubble sort algorithm, two extra variables are used. Hence, the space complexity will be O(2).
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={12,45,23,51,19,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int i=0,j=i+1 ; i<n-1; i++,j++)
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

//................another way ...............

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={-2, 45, 0, 11, -9};
    int n = (sizeof(arr)/sizeof(arr[0]));
    for(int i=1;i<n;i++)
    {
        for(int j=0,k=j+1;j<n-i;j++,k++)
        {
            if(arr[j]>arr[k])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }

}
