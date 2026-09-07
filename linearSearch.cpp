#include<bits/stdc++.h>
using namespace std;

int linear(int arr[] , int n , int num)
{
    for(int i = 0; i < n ; i++)
    {
        if(arr[i] == num)
        {
            return i;
            break;
        }
        
    }
    return -1;
}

int main()
{
    int n = 6;
    int arr[n] = {2,7,8,3,9,4};
    int num = 4;
    int ans = linear( arr , n , num);
    cout << ans;

    return 0;
}