#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, res="12345678";
    cin >> s;
    int hour;
    if(s[8] == 'A'){
        if (s[0] == '1' && s[1] == '2'){
            s[0] = '0';
            s[1] = '0';
        }
        s[8] = 0;
        s[9] = 0;
        for (int i = 0; i < s.length()-2; i++){
            res[i] = s[i];
        }
    }else if(s[8] == 'P'){
        if(s[0] == '1' && s[1] == '2'){
            s[8] = 0;
            s[9] = 0;
        }else{
            string str_hour;
            char a = s[0], b = s[1];
            str_hour = a;
            str_hour += b;
            hour = stoi(str_hour);
            hour += 12;
            str_hour = to_string(hour);
            s[0]=str_hour[0];
            s[1]=str_hour[1];
            s[8] = 0;
            s[9] = 0;
        }
        for (int i = 0; i < s.length()-2; i++){
            res[i] = s[i];
        }
    }
    cout <<res << endl;
    return 0;
}