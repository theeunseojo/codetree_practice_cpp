#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[10];
    int cnt = 1;
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < str[i].length(); j++){
            cout << str[i][j];
            if(cnt % 5 == 0) cout << endl;
            cnt++;
        }
    }
    return 0;
}