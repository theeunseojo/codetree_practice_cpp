#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[10] = {};
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        if(arr[i] == 0) break;
    }
    for (int i = 0; i < 10; i++){
        if (arr[9 - i] == 0) continue;
        else cout << arr[9 - i] << " ";
    }
    return 0;
}