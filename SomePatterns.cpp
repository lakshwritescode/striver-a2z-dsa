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

int main()
{
    cout<<"give input for pattern"<<endl;
    int n;
    cin>>n;
    // cout<<"Square Pattern below"<<endl;
    // SquareStars(n);

    // cout << "Right angled traingle pattern below" << endl;
    // rightAngledTriangle(n);

    // cout << "Right Number 1 traingle pattern below" << endl;
    // rightNumberTriangle1(n);

    cout << "Right Number 2 traingle pattern below" << endl;
    rightNumberTriangle2(n);

    return 0;
}