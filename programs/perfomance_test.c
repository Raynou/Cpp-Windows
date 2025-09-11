#include<stdio.h>
int main(){
    int my_var = 0;

    for(int i = 0; i<1000000000; i++){
        my_var++;
    }

    printf("%d", my_var);

    return 0;
}