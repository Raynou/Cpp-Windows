#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int grade[n];
    for (int i = 0; i < n; i++){
        cin >> grade[i];
    }

    int round_num = 0;
    for (int i = 0; i<n;i++){
        if(grade[i]<38 || ((grade[i]%5==0)&&(grade[i]>=40))){
            cout << grade[i] << endl;
        }else{
            round_num = grade[i];
            int j = 0;
            while(j<2){
                round_num++;
                if(round_num%5==0){
                    grade[i] = round_num;
                    break;
                }
                j++;
            }
            cout << grade[i] << endl;
        }
    }
    return 0;
}