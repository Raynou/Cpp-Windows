#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    string n;
    long control = 0;

    cin >> n;

    for(int i = 0; i < n.length(); i++){
        if(n[i] == '('){
            control++;
        }
        else{
                control--;
            if(control == -1){
                break;
            }
        }
    }

    if(control == 0){
        cout << "SI" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}