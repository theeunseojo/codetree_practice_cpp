#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n , m;
    int cnt = 0;
    cin >> m;
    for ( int i = 0; i < m; i++){
        cin >> n;

        while ( n != 1){
            if ( n % 2 == 0 ) n = n / 2;
            else n = 3 * n + 1;
            cnt++;
        }
        
        cout << cnt << endl;
        cnt = 0;
        
    }

    


    return 0;
}