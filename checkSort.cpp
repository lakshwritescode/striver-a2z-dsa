#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n = 6;

    int arr[n] = {12,14,14,18,22,24};
    cout << check(arr , n);

   

    return 0;
}