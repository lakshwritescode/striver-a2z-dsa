#include<bits/stdc++.h>
using namespace std;
#include<fstream>
int main()
{
    fstream myFile;
    myFile.open("Lakshay.txt" , ios::out);//write mode
    if(myFile.is_open())
    {
        myFile << "Lakshay \n Engineer";
        myFile << "Learning Everyday \n New Lines";
        myFile.close();
    }
    else
    {
        cout << "Error";
    }
    
    return 0;
}