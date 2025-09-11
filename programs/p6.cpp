#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    unsigned long long int k, res, cont = 0;
    
    cin >> k;
    
    if(k == 0){
        cout << "No hay risas sin vacaciones >:(";
        return 0;
    }
    
    while(k != 0){
        if(k%2 == 1){
            cout<< cont << endl;
        }
        k /= 2;
        cont++;
    }
    
    return 0;
}