#include <iostream>

using namespace std;

int main()
{
    int mat1[3][3]={1,2,3 , 4,5,6 ,7,8,9};
    int mat2[3][3]={9,8,7 , 6,5,4 ,3,2,1};
    int sum, sum1 = 0;
    for(int i = 0; i < 3;i++)
    {
        for( int j = 0; j < 3;j++)
        {
            sum = mat1[i][j] + mat2[i][j];
            sum1 = sum1 + sum;
        }

    }
    cout << "la suma de las dos matrices es " << sum1 << endl;
    return 0;
}
