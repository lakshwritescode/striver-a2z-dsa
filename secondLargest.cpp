#include<bits/stdc++.h>
using namespace std;

int findSLarge(int arr[] , int n)
{
    int largest = arr[0];
    int sLargest = -1;
    for(int i = 1 ; i< n; i++)
    {
        if(arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main()
{
    int n = 8;
    int arr[n] = {17, 42, 9, 31, 56, 23, 48, 12};
    int ans = findSLarge(arr , n);
    cout << ans <<" ";

    return 0;
}