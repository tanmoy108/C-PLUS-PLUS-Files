/*
42. Maximum Subarray Sum
Find the subarray in an array which has maximum sum.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cin>>n;
    int arr[]= {-1,4,7,2},sum=0,maxnum = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    /*for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }*/
    for(int i =0; i<n; i++)
    {
        for(int j =i; j<n; j++)
        {
            for(int k = i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            cout<<"sum: "<<sum;
            maxnum = max(maxnum,sum);
            sum=0;
            cout<<endl;
        }
    }

    cout<<"maximum number: "<<maxnum<<endl;

}

//-----------kadane's algorithm --------------------------
 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxnum = INT_MIN,m=0;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n;i++)
    {
        cin>>arr[i];
        m+=arr[i];//7-4=3
        if(m<0)
        {
            m=0;//0
        }
        maxnum = max(maxnum,m);
    }
    cout<<maxnum;
}
