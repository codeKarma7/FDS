#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //declare a 2*2 matrix
    int matrix1[2][2],matrix2[2][2];
    int result[2][2];

    //input lina ko lagi
    cout<<"Enter the elements of matrix 1 :";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the elements of matrix 2 :";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>matrix2[i][j];
        }
    }

    //perform matrix addition
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    //result
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           cout<<result[i][j]<<" ";
        }
        cout<< endl;
    }

    return 0;
}