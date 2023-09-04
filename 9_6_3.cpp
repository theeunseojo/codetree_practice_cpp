#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    cin >> str;

    int len = str.length();
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < len; i++){
        if(str.substr(i,2) == "ee"){
            cnt1++;
        }
        if(str.substr(i,2) == "eb"){
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;

    return 0;
}