#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[] , int n)
{
    int s = 0 ; 
    int e = n-1;
    while( s < e)
    {
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int n = 6;
    int arr[n] = {1 , 3 , 2 , 4 , 7, 5};

    reverseArray(arr , n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0 ;
}