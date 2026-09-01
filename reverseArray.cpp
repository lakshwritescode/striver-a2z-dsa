#include<bits/stdc++.h>
using namespace std;

void bruteReverse(int arr[] , int n)
{
    int mid = n/2;
    int i = 0;
    while( i  < mid)
    {
        swap(arr[i] ,  arr[n-i-1]);
        i++;
    }
}
void twopointer(int arr[], int n)
{
    int left = 0;
    int right = n-1;
    while(left < right)
    {
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int n = 6;
    int arr[n] = {12 , 14 , 13 , 11 , 9 , 23};

    twopointer(arr, n);

    for(int i = 0 ; i< n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}