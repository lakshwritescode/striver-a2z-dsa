#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[] , int n)
{
    int temp = arr[0];
    int i = 1;
    while( i < n)
    {
        arr[i-1] = arr[i];
        i++;
    }
    arr[n-1] = temp;

}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    rotate(arr , n);

    for(int i = 0 ; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}