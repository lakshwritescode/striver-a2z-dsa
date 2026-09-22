#include<bits/stdc++.h>
using namespace std;

void brute(int arr[] , int n , int target)
{
    for(int i = 0; i < n ; i++)
    {
        for(int j = i+1 ; j <n ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << i << " " << j<<endl;
                return;
            }
        }
    }

   
}

void better(int arr[] , int n ,int target)
{
    map<int , int>mpp;

    for(int i = 0 ; i< n ; i++)
    {
        int a = arr[i];
        int moreNeeded = target - a;

        if(mpp.find(moreNeeded) != mpp.end())
        {
            cout << mpp[moreNeeded] << " " << i<<endl;
        }
        mpp[a] = i;
    }
}

int main()
{
    int n = 6;
    int target = 14;
    int arr[n] = {2,6,5,8,11};

    better(arr,n , target) ;

    return 0 ;
}