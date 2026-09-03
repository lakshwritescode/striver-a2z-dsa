#include<bits/stdc++.h>
using namespace std;


void moveZeroes(int arr[] , int n)
{
    int i = 0;
    
    for(int j = 0 ; j < n ;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j] , arr[i]);
            i++;
        }
    }
    
    
}

int main()
{
    int n = 6;

    int arr[n] = { 23  , 1 , 0 , 3 , 12 ,0 };
    moveZeroes(arr , n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
