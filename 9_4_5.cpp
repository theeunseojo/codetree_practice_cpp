#include <iostream>
#include <string>
using namespace std;

int main() {
    // 문자열 입력
    string str;
    cin >> str;

    // 짝수만 넣을 문자열 
    string new_str = "";
    // 새로운 문자열에 넣기 
    for(int i = 1; i < str.length(); i += 2){
        new_str += str[i];
    }
     
    // 역순 출력 
    for(int i = new_str.length() - 1; i >= 0; i--){
        cout << new_str[i];
    }
    
    return 0;
}