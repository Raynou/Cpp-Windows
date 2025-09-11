// * Objetivo: Determinar cuantas manzanas y cuantas naranjas cayeron en la casa de Sam
#include<iostream>
using namespace std;
int main(){
    /* 
    ? 's' es el punto izquierdo de la casa
    ? 't' es el punto derecho de la casa
    ? 'a' es la localización del árbol de manzanas
    ? 'b' es la localización del árbol de naranjas
     */
    int s, t, a, b;

    /* 
    ? 'm' cantidad de manzanas que cayeron del punto 'a'
    ? 'n' cantidad de naranjas que cayeron del punto 'b'
     */
    int m, n;
    
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    /* 
    ? 'apples[m]' array de distancias en la que cayeron las manzanas
    ? 'oranges[n]' array de distancias en la que las naranjas
     */
    int apples[m], oranges[n];
    int how_many_apples = 0, how_many_oranges = 0;
    for (int i = 0; i < m; i++){
        cin >> apples[i];
        if (apples[i]+a >= s && apples[i]+a <= t){
            how_many_apples++;
        }
        
    }
    for (int i = 0; i < n; i++){
        cin >> oranges[i];
        if (oranges[i]+b <= t && oranges[i]+b >= s){
            how_many_oranges++;
        }
        
    }
    cout << how_many_apples << endl << how_many_oranges << endl;
    return 0;
}