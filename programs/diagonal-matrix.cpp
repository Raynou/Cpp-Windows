#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cin >> N;
    int matrix[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }
    int primary_diagonal_values[N];
    for (int i = 0; i < N; i++){
        primary_diagonal_values[i] = matrix[i][i];
    }

    int secondary_diagonal_values[N];
    for (int i = 0, j = N-1; i < N; i++, j--){
        secondary_diagonal_values[i] = matrix[i][j];
    }

    int primary_diagonal=0, secondary_diagonal=0;
   for (size_t i = 0; i < N; i++){
    primary_diagonal += primary_diagonal_values[i];
    secondary_diagonal += secondary_diagonal_values[i];
   }
   
    int diagonal_absolute_diff = abs(primary_diagonal-secondary_diagonal);

    cout << diagonal_absolute_diff <<endl;

    return 0;
}