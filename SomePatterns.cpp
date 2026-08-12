#include<iostream>
using namespace std;

void SquareStars(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void rightAngledTriangle(int n)
{
    for(int i = 0; i<n;i++)
    {
        for(int j = 0 ;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void rightNumberTriangle1(int n)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void rightNumberTriangle2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void downTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i+1 ; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}

void downTriangleNums(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j ;
        }
        cout << endl;
    }
}

void pyramid(int n)
{
    for(int i = 0 ; i< n ; i++)
    {
        for(int j = 0; j <= n-i-1 ; j++)
        {
            cout <<" ";
        }

        for(int k = 0; k < 2*i+1 ;k++)
        {
            cout <<"*";
        }
        for (int l = 0; l <= n - i - 1; l++)
        {
            cout <<" ";
        }

        cout<<endl;
    }
}

void downPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout <<" ";
        }

        for (int k = 0; k < 2*n - (2*i +1); k++)
        {
            cout <<"*";
        }
        for (int l = 0; l <= i; l++)
        {
            cout <<" ";
        }

        cout << endl;
    }
}

void diamond(int n)
{
    pyramid(n);
    downPyramid(n);
}

void halfDiamond(int n)
{
    for(int i = 1; i <= 2*n - 1 ; i++)
    {
        int stars = i;
        if( i > n) stars = 2*n - i;
        for(int j = 1 ; j<= stars; j++)
        {
            cout<< "* ";
        }
        cout<<endl;
        
    }
}


void rightTriangle01(int n){
    int start = 1;
    for(int i = 1 ; i<= n; i++)
    {
        if(start % 2 == 0) start = 0;
        else start = 1 ;

        for(int j = 1; j <= i; j++)
        {
            cout << start ;
            start = 1 - start ;
        }
        cout<<endl;
    }


}


void numberCave(int n)
{
    int space = 2*(n-1);
    for(int i = 1; i<= n ; i++)
    {
        //numbers

        for(int j = 1 ; j <= i ; j++)
        {
            cout<< j ;
            
        }

        //spaces

        for(int j = 1 ; j <= space; j++)
        {
            cout << " ";
        }

        //numbers

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout<<endl;
        space -= 2;
    }
}

int main()
{
    cout<<"give input for pattern"<<endl;
    int n;
    cin>>n;
    
    // SquareStars(n);
    
    // rightAngledTriangle(n);
    
    // rightNumberTriangle1(n);
   
    // rightNumberTriangle2(n);
   
    // downTriangle(n);

    // downTriangleNums(n);

    //pyramid(n);

    //downPyramid(n);

    //diamond(n);

    //halfDiamond(n);

    //rightTriangle01(n);

    // numberCave(n);

    

    return 0;
}