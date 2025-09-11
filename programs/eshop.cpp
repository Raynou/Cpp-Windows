#include<bits/stdc++.h>
using namespace std;
int mostExpensive(int b, vector<int> keyboard, vector<int> usb);
int main(){
    int b, m, n;
    cin >> b >> m >> n;
    vector<int> keyboard(m);
    for(int i=0; i<keyboard.size(); i++){
        cin >> keyboard[i];
    }

    vector<int> usb(n);
    for(int i=0; i<usb.size(); i++){
        cin >> usb[i];
    }

    cout << mostExpensive(b, keyboard, usb);
    return 0;
}


int mostExpensive(int b, vector<int> keyboard, vector<int> usb){
   int max = -1;
   reverse(keyboard.begin(), keyboard.end());
   sort(usb.begin(), usb.end());
   for(int i=0; i<keyboard.size(); i++){
       for(int j = 0; j<usb.size(); j++){
           if(keyboard[i]+usb[j] > b) break;
           if((keyboard[i]+usb[j])>max){
                max = keyboard[i]+usb[j];
           }
       }
   }
   return max;
} 
