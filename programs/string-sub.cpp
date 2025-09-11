#include<iostream>
using namespace std;
int main(){

    string test = "hackerrank";
    string s = "hhhhaaaaackkkkerrrrrrrrank";
    if(s.length()<test.length()){
        cout << "NO";
        return 0;
    }
    int c = 0;
    for(int i = 0; i< s.length();i++){
        if(c>=test.length()) break;
        if(s[i]==test[c]){
           c++; 
        }
    }
    
    if(c==test.length()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}