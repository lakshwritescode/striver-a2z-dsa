#include<bits/stdc++.h>
using namespace std;

void printName(int count) //print name 5 times using recursion       
{
    

    if(count == 6)
    {
        return;
    }
    cout << count << " : Lakss"<<endl;
    count++;
    printName(count);

}

void backtrackDescending(int n)
{

    if(n == 6)
    {
        return;
    }
    n++;
    backtrackDescending(n);
    cout << n << " ";

}

void backtrackAscending(int n)
{
    if (n == 0)
    {
        return;
    }
    n--;
    backtrackAscending(n);
    cout << n << " ";
}

void descendingNum(int n)
{
    if( n == 0)
    {
        return;
    }
    cout << n << " ";
    n--;
    descendingNum(n);
}
    
void sumOfFirstNnumbers(int n , int sum)
{
    if( n < 1 )
    {
        cout << sum ;
        return;
    }

    sumOfFirstNnumbers(n-1 , sum + n);
}



int sumOfFirstN(int n)
{

    if(n == 0) return 0;

    return n+ sumOfFirstN(n-1);

}


int factorial(int n)
{
    if( n == 1) return 1;

    return n*factorial(n-1);
}

void reverseAnArray(int i, int arr[] ,int n) // i = index , n = size
{
    if(i > n/2) return ; 
    swap(arr[i] , arr[n-i-1]);

    reverseAnArray(i+1 , arr, n);

}

bool checkPalindrome(int i , string s)
{
    if( i >= s.size()/2 ) return true;

    if( s[i] != s[s.size()-i-1]){ return false ;}

    return checkPalindrome(i+1 , s);
}

int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);

}

    int
    main()
{

    //printName(count);
    
    //descendingNum(5);
    
    //backtrackDescending(0);
    
    //backtrackAscending(6);

    //sumOfFirstNnumbers(10,0);

    //cout << sumOfFirstN(9)<< " "<<endl;

    //cout << factorial(5)<< " "<< endl;  

    // int n;
    // cout<<" Input size of array " <<endl;
    // cin>>n;
    // int arr[n];
    // for(int i = 0 ; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // reverseAnArray( 0 , arr , n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";

        
    // }
    // return 0;

    // string s = "madam";
    // cout << checkPalindrome(0,s);


    cout << fibonacci(5);

}