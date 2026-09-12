#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[] ,  int n)
{
    int i = 0;
    for(int j = 0 ; j < n; j ++)
    {
        if(arr[j] != 0)
        {
            swap(arr[i] , arr[j]);
            i++;
        }
    }
}

int main()
{
    int n = 7;

    int arr[n] = {0 ,1,0,3,12,0,4};

    moveZero(arr , n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}