#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;
    int arr[10][10];

    for(int i = 0; i < n; i++){
        int num = i + 1;
        for(int j = 0; j < n; j++){
            arr[i][j] = num;
            cout << arr[i][j] << " ";
            num += n;
        }
        cout << endl;
    }

    return 0;
}