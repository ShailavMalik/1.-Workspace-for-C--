// Program to multiply two matrices
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    cout << "Enter first matrix:\n";
    for (int i = 0; i < 3; i++) // loop for inputing  matrix1
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter second matrix:\n";
    for (int i = 0; i < 3; i++) // loop for inputing matrix2
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        mat3[i][j]=0;
    }
}
    for (int l = 0; l < 3; l++)
    {
        cout<<"|";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat3[l][i] += (mat1[l][j] * mat2[j][i]);
            }
        }
    }

    cout << "Matrix after multiplication: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<setw(2)<< mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}