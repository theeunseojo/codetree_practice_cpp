#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    char cnt = 'A';
    cin >> n;
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            if ( i > j ) cout << "  ";
            else {
                if ( cnt >'Z') cnt = 'A';
                cout << cnt << ' ';
                cnt ++;
            }
        }
        cout << endl;
    }

    return 0;
}