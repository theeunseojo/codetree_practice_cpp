#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int len = str.length();

    bool exits1 = false;
    bool exits2 = false;

    for(int i = 0; i < len - 2 ; i++){
        if(str.substr(i,2) == "ee") exits1 = true;
        if(str.substr(i,2) == "ab") exits2 = true;
    }
    
    if(exits1) cout << "Yes" << " ";
    else cout << "No" << " ";
    
    if(exits2) cout << "Yes";
    else cout << "No";
    return 0;
}