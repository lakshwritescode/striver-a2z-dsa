#include <bits/stdc++.h>
using namespace std;

void rotate(int nums[], int n , int k)//brute force btw
{

    int i = 0;
    
    while (i < k)
    {

        int temp = nums[n - 1];
        int j = n - 2;
        while (j > -1)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[0] = temp;
        i++;
    }
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
