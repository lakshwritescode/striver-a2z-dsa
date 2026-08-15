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


int main()
{

    //printName(count);
    
    //descendingNum(5);
    
    //backtrackDescending(0);
    
    //backtrackAscending(6);

    //sumOfFirstNnumbers(10,0);

    //cout << sumOfFirstN(9)<< " "<<endl;

    cout << factorial(5)<< " "<< endl;  

    return 0;
}