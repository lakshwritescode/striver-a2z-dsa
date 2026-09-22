#include<bits/stdc++.h>
using namespace std;

void brute(int arr[] , int n , int target)
{
    for(int i = 0; i < n ; i++)
    {
        for(int j = i+1 ; j <n ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << i << " " << j<<endl;
            }
        }
    }

   
}

int main()
{
    int n = 6;
    int target = 14;
    int arr[n] = {2,6,5,8,11};

    brute(arr,n , target) ;

    return 0 ;
}