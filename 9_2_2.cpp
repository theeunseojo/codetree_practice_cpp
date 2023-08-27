#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    string str1;

    getline(cin,str1);

    char str2;
    cin >> str2;

    for(int i = 0; i < 100; i++){
        if(str2 == str1[i]) count++;
    }

    cout << count ;
    return 0;
}