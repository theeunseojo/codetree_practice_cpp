#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n ;
    cin >> n;
    for ( int i = 1; i <= n; i++){
        for ( int j = 1; j <= n - i + 1; j++){
            if ( i + j != n + 1) cout << i << " * " << j << " = " << i * j << " / "; 
            else cout << i << " * " << j << " = " << i * j ; 
        }
        cout << endl;
    }
    return 0;
}