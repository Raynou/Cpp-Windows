#include<iostream>
using namespace std;
string dayOfTheProgrammer(int y);

int main() {
    int y;
    cin >> y;
    string year = dayOfTheProgrammer(y);
    cout << year<<endl;
    return 0;
}

string dayOfTheProgrammer(int y) {
    string year = "";
    string yearStr = to_string(y);
    //First diff btw calendars
    if(y < 1918){
        if(y%4==0){
            year = "12.09." + yearStr;
        }else{
            year = "13.09." + yearStr;
        }
    }else if(y > 1918){
        if(y%4==0 && (y%400==0 || y%100!=0)){
            year = "12.09." + yearStr;

        }else{
            year = "13.09." + yearStr;
        }
    }else{
        year = "26.09.1918";
    }
    return year;
}
