#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    cout<<"Enter first matrix: \n";
    for (int i = 0; i < 3; i++) // Loop for inputing matrix1
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout<<"Enter second matrix:\n";
    for (int i = 0; i < 3; i++) // Loop for inputing matrix2
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < 3; i++) // Loop for inputing matrix2
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout<<"\n\nAddition of the matrices:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<setw(2)<< mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}