//matrix multiplication

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //declare a 2*2 matrix
    int matrix_1[2][2],matrix_2[2][2];
    int result[2][2];

    //1st matrix input lina ko lagi
    cout<<"Enter the elements of matrix 1 :";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>matrix_1[i][j];
        }
    }
    
    //2nd matrix input
    cout<<"Enter the elements of matrix 2 :";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>matrix_2[i][j];
        }
    }

    // Multiply the matrices
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                result[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }

    // Display the result
    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
