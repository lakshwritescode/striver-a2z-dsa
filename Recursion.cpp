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
    

int main()
{

//    printName(count);
//    descendingNum(5);
    //backtrackDescending(0);
    backtrackAscending(6);
return 0;
}