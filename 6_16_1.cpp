#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;

    for ( int i = 0; i < n; i++){
        int a , b;
        cin >> a >> b;
        int sum  = 1;
        for ( int j = a; j <= b; j++ ){
            sum *= j;
        }
        cout << sum << endl;
    }
    return 0;
}