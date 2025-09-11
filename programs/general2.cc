#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int reversed_number = 0;
    int rem = 0;
    int tmp = x;

    while(x != 0){
        rem = x%10;
        reversed_number = reversed_number * 10 + rem;
        x /= 10;
    }

    return tmp == reversed_number;
}

int main() {
    int n = 111;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
