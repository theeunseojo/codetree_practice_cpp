#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[15][15] = {};
    arr[0][0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}