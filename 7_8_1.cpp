#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n , m;
    cin >> n >> m;
    int arr[100][100] ={};

    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = num;
            cout << arr[i][j] << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}