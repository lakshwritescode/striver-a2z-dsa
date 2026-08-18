#include<bits/stdc++.h>
using namespace std;
void insertion(int n , int arr[])
{
    for(int i = 0; i< n ; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }


}

int main()
{
    int n = 6;
    int arr[n] = {14,9, 15,12,6,8,13};
    insertion(n , arr);

    for(int i = 0 ; i< n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}