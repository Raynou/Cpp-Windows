#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int matrix[3][3] = {{11, 2, 4},{4,5,6},{10,8,-12}};

    // The output should be 2 couse |15-17|
    
    int leftToRightDiagonal = matrix[0][0] + matrix[1][1] + matrix[2][2];
    int righToLeftDiagonal = matrix[0][2] + matrix[1][1] + matrix[2][0];

    cout << leftToRightDiagonal <<endl;
    cout << righToLeftDiagonal << endl;

    cout << abs(leftToRightDiagonal-righToLeftDiagonal);
    return 0;
}