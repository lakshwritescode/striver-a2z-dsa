#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n , int k)
{
    
    int i = 0;
    while( i <= k)
    {

    
    int temp = arr[0];
    int j = 1;
    while (j < n)
    {
        arr[j - 1] = arr[j];
        j++;
    }
    arr[n - 1] = temp;
    i++;
    }
}

void reverse(int arr[] , int n)
{
    int s = 0;
    int e = n-1;

    while(s < e)
    {
        swap(arr[s] , arr[e]);
        s++;e--;
    }
}

void rotateByReverse(int arr[] , int n , int k)
{
    reverse(arr , arr+k);
    reverse(arr+k , arr+n);
    reverse(arr , n);
}

int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5 , 6 , 7};
    int k = 3;
    rotate(arr, n , k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}