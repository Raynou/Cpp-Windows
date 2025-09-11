#include<bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int x, y, z;
    int q;
    cin >> q;
    string res[q];
    for(int i = 0; i < q;i++){
        cin >> x >> y >> z; 
        if(abs(z-x)==abs(z-y)){
            res[i] = "Mouse C";
        }else if(abs(z-x)<abs(z-y)){
            res[i]= "Cat A";
        }else{
            res[i] = "Cat B";
        }
    }

    for(string elem:res){
        cout << elem << endl;
    }
    return 0;
}
