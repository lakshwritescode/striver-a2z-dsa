#include<bits/stdc++.h>
using namespace std;

void mergeArray(int arr1[] , int n , int arr2[] , int m , int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while ( i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else if(arr2[j] < arr1[i])
        {
            arr3[k++] = arr2[j++];
        }
    }

    while(i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while(j < m)
    {
        arr3[k++] = arr2[j++];
    }

}

void print(int arr3[] , int n , int m)
{
    for(int i = 0 ; i < (m+n) ; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr1[n] = {1,3,5,7,9};

    int m = 3;
    int arr2[m] = {2,4,6};

    int arr3[m+n] = {0};

    mergeArray(arr1,n,arr2,m,arr3);

    print(arr3 , n , m);

    return 0 ;
}