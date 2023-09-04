#include <iostream>
#include <string>
using namespace std;

int main() {
    // 문자열 입력 
    string str;
    cin >> str;

    string target_str;
    cin >> target_str;

    int start_idx = -1;

    if(str.find(target_str) != string :: npos){
        start_idx = str.find(target_str);
    }

    cout << start_idx;
    return 0;
}