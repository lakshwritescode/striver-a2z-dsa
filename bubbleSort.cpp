#include<bits/stdc++.h>
using namespace std;

void bubble(int n , int arr[])
{
    for(int i = 1 ; i <n ; i++)
    {
        for(int j = 0 ; j < n-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main()
{
    int n = 6;

    int arr[n] = {13,46,24,52,20,9};

    bubble(n , arr);
    for(int i = 0; i< n ;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}