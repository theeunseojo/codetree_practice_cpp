#include <iostream>
using namespace std;
int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--){
        for ( int j = i; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}