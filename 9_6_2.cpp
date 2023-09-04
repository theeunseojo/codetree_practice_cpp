#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    char ch;
    cin >> ch;

    int len = str.length();
    int start_idx = -1;

    if(str.find(ch) != string :: npos){
        start_idx = str.find(ch);
        cout << start_idx ;
    }
    else cout << "No";
    return 0;
}