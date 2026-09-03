#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[] ,int arr2[] ,int arr3[],  int n) //brute force
{   int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr1[i] < arr2[i])
        {
            arr3[count] = arr1[i];
            count++;
            arr3[count] = arr2[i];
            count++;
        }
        else{
            arr3[count] = arr2[i];
            count++;
            arr3[count] = arr1[i];
            count++;
        }
    }

}

void Optimalmerge(int arr1[], int arr2[], int arr3[], int n)
{
    int i = 0  , j = 0;
    int k = 0;

    while(i < n && j < n)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr3[], int n)
{
    for(int i = 0; i< (2*n) ; i++)
    {
        cout << arr3[i] << " ";
    }
}
int main()
{

    int n = 4;
    int arr1[n] = {1 , 3 ,7 , 10};
    int arr2[n] = {2 , 4 , 6 , 9};
    int arr3[n + n] = {0};
    merge(arr1 , arr2 ,arr3 ,  n);
    print(arr3 , n);
    return 0;
}