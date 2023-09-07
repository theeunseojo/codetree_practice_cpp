#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    char second = str[1];
    
    for(int i = 0; i < str.length(); i++){
        if(second == str[i]){
            str[i] = str[0];
        }
    }
    cout << str;
    return 0;
}