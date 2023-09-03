#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10] ;

    int n;
    cin >> n;
    
    string str_start = "";
    for(int i = 0; i < n; i++){
        cin >> str[i];
        str_start += str[i];
    }
    cout << str_start;
    return 0;
}