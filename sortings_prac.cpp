#include<bits/stdc++.h>
using namespace std;

void selection(int arr[] , int n)
{
    for(int i = 0; i< n-1; i++)
    {
        int min = i;
        for(int j = i+1 ; j < n ;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min] , arr[i]);
    }
}


void bubble(int arr[] , int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j+1] , arr[j]);
            }
        }
    }
}

void insertion(int arr[] , int n)
{
    for(int i = 0  ; i < n ; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j] )
        {
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int n = 6;
    int arr[n] = {13, 46 , 24 , 52 , 20 , 9};

    insertion(arr , n);

    for(int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}