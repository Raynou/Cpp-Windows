#include<iostream>
#include<string>
using namespace std;
int main(){
    int num_ejer, x1, y1, x2, y2, xSum, ySum, xOpc, yOpc;
    string output;
    cin >> num_ejer;

    for (int i = 0; i < num_ejer;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        
        xSum = x1 + x2;
        ySum = y1 + y2;

        cin >> xOpc >> yOpc;
        if (xOpc == xSum && yOpc == ySum){
            output += "A";
        }
        cin >> xOpc >> yOpc;
        if (xOpc == xSum && yOpc == ySum){
            output += "B";
        }
        cin >> xOpc >> yOpc;
        if (xOpc == xSum && yOpc == ySum){
            output += "C";
        }
        cin >> xOpc >> yOpc;
        if (xOpc == xSum && yOpc == ySum){
            output += "D";
        }
        
    }

    cout << output<< endl;
    return 0;
}