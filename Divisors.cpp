
#include<bits/stdc++.h>
using namespace std;
int* printDivisors(int n, int &size){
 vector<int> ls;

    for(int i = 1 ; i<= sqrt(n);i++)
    {
        if((n%i) == 0)
        {
            ls.push_back(i);
            if(n/i != i)
        {
            ls.push_back(n/i);
        }
        }
        
    }
    sort(ls.begin() , ls.end());
   size = ls.size();


    int* divisors = new int[size];

    for (int i = 0; i < size; i++) {
        divisors[i] = ls[i];
    }

    return divisors;
}

int main()
{
    //input code

    return 0;
}
