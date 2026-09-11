#include<bits/stdc++.h>
using namespace std;

int largest(int arr[] , int n)
{
    int max = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > max) max = arr[i];
    }

    return max;
}

int main()
{
    int n = 6 ;

    int arr[n] = {3,2,1,5,2,7};

    int max = largest(arr , n);
    cout << max << endl;


    return 0 ;
}