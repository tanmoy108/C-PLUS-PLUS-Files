//29. find maximum and minimum number in array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout << *min_element(arr, arr + n)<< " " << *max_element(arr, arr + n);

}

//............ another way ..................

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max_no = INT_MIN;
    int min_no = INT_MAX;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        max_no = max(max_no,arr[i]);
        min_no = min(min_no,arr[i]);
    }
    cout<<max_no<<" "<<min_no;

}
