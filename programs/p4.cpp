#include<iostream>
#include<cstring>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // TODO: fixme.
  //El nombre de miguel tiene 6 letras
  // necesita encontrar las 6 letras m,i,g,u,e,l para hacer que sea 1 vez

  string letras= "miguelmiguemiguoo"; //Acá son dos veces

  int miguel[6]={0,0,0,0,0,0};

  char arr[letras.length()+1];
  strcpy(arr, letras.c_str());

  for(int j = 0; j<sizeof(arr); j++){
    if(arr[j]=='m') {miguel[0]+=1;}
    if(arr[j]=='i') {miguel[1]+=1;}
    if(arr[j]=='g') {miguel[2]+=1;}
    if(arr[j]=='u') {miguel[3]+=1;}
    if(arr[j]=='e') {miguel[4]+=1;}
    if(arr[j]=='l') {miguel[5]+=1;}
  }

    // ¿Cómo obtener el mínimo valor entre las 6 variables?
    int min = miguel[0];
    for(int elem : miguel){
        if(elem < min){
            min = elem;
        }
    }

    cout << min;

  return 0;
}
