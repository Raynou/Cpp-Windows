#include<bits/stdc++.h>
using namespace std;
void countValleys(int s, string p);
int main(){
    int steps=0;
    string p;
    cin >> steps >> p;
    countValleys(steps, p);
    return 0;
}
void countValleys(int s, string p){
    int level=0, valley=0;
    for(char elem : p){
        if(elem == 'U'){
            level++;
            if(level == 0){
                valley++;
            }
        }else{
            level--;
        }
    } 
    cout << valley;
}
