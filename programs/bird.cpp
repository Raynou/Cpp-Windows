#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> birds(n);
    for (int i=0; i<birds.size(); i++){
        cin >> birds[i];
    }
    int opt[] = {0,0,0,0,0};
    for (int i=0; i<birds.size(); i++){
        if(birds.at(i)==1){opt[0]++;}
        if(birds.at(i)==2){opt[1]++;}
        if(birds.at(i)==3){opt[2]++;}
        if(birds.at(i)==4){opt[3]++;}
        if(birds.at(i)==5){opt[4]++;}
    }
    
    int max=-1,res=0;
    for (int i = 0; i<5; i++){
        if(max < opt[i]){
            max =  opt[i];
            res = i+1;
        }
    }
    cout << res;
    return 0;
}
