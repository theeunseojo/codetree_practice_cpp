#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[11];
    cin >> arr[1];
    cin >> arr[2];

    for(int i = 3; i < 11; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        if(arr[i] >= 10){
            arr[i] = arr[i] % 10;
        }
    }
    for(int i = 1; i < 11; i++){
        cout << arr[i] << " ";
    }
    return 0;
}