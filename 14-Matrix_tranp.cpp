// Program to print transpose of a matrix
#include <iostream>
using namespace std;

int main()
{
    int mat[3][3];
    int mat_t[3][3];

    cout<<"Enter the matrix: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
            
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat_t[j][i]=mat[i][j];

        }
    }
    cout<<"\n\nTranspose of matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<mat_t[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}