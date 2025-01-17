//perform scalar multiplication

#include<iostream>
using namespace std;

int main()
{
    int matrix[2][2];
    int scalar;

    cout<<"Enter the elements of the matrix :";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"Enter scalar value for multiplication :";
    cin>>scalar;


    //performing scalar multiplication
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            matrix[i][j] *= scalar;
        }
    }


    //the resulting matrix
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout <<endl;
    }

    return 0;
}