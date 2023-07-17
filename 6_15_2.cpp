#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n ;
    char cnt = 'A';
    cin >> n;
    
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < i + 1 ; j++){
            if ( cnt > 'Z') cnt = 'A';
            cout << cnt;
            cnt++;
        }
        cout << endl;
    }

    return 0;
}