#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[11];
    cin >> arr[1];
    cin >> arr[2];
    int pp = arr[1];
    int p = arr[2];
    cout << arr[1] << " " << arr[2] << " ";
    for(int i = 3; i < 11; i++){
        arr[i] = p + 2 * pp;
        pp = p;
        p = arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}