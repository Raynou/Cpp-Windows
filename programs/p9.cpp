#include<iostream>
using namespace std;
int main(){
    int N, sum=0, box, res=0;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> box;
        sum += box;
        if (sum<=0){
            sum=0;
        }
        res = max(res, sum);
    }
    cout << res << endl;   
    return 0;
}