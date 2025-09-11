#include <iostream>

using namespace std;
int N, numero, camino, escaleras;
int main()
{
    
    cin >> N;
    int tablero[N+1][N+1]={0};

    // Se llena la matriz de 1 y 0 (pares e impares)
    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> numero;
            if(numero % 2 == 0)
                tablero[i][j] = 1;
        }
    }

    for (int i = N-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            camino = max(tablero[i+1][j], tablero[i+1][j+1]);
            tablero[i][j] += camino;
        }
    }

    cout << tablero[1][1] << endl;
    return 0;
}