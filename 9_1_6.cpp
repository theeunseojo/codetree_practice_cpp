#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2;
    string str3;

    cin >> str1 >> str2 >> str3;

    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();

    int longlen , shortlen = 0;
    if( len1 > len2 && len1 > len3){
        longlen = len1;
        if(len2 < len3) shortlen = len2;
        else shortlen = len3;
    }
    else if ( len2 > len1 && len2 > len3){
        longlen = len2;
        if(len1 < len3) shortlen = len1;
        else shortlen = len3;
    }
    else {
        longlen = len3;
        if(len1 < len2) shortlen = len1;
        else shortlen = len2;
    }

    cout << longlen - shortlen ;
    return 0;
}