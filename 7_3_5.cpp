#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[100];
    for(int i = 0; i < 100; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 100; i++){
        if(arr[i] == 0){
            break;
        }
        else if ( arr[i] % 2 == 0) cout << arr[i] / 2 << " ";
        else cout << arr[i] + 3 << " ";
    }
    return 0;
}