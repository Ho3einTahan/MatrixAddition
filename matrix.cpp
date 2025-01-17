#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{

    int m = 2;
    int n = 3;

    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    int B[2][3] = {
        {2, 3, 4},
        {5, 6, 7},
    };

    int C[2][3];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    
      for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<C[i][j]<<' ';
        }
    }

    return 0;
}

// g++ matrix.cpp -o app.exe
// ./app.exe