#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0; 
    cin >> n;
    for ( int i = 0; i < n; i++){
        for ( int j = 0;  j < n; j++){
            cout << (char) (65 + cnt) ;
            cnt ++;
        }
        cout << endl;
    }
    return 0;
}