#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    
    int n;
    cin >> n;

    int len = str.length();

    if( n > len){
        for(int i = 0; i < len; i++ ){
            cout << str[len - 1 - i] ;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            cout << str[len -1 -i];
        }
    }
    return 0;
}