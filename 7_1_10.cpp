#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;
    int arr[100];
    // �Է� 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // ��� 
    for(int i = n - 1; i >= 0; i--){    // n �� n -1 ���� 
        if(arr[i] % 2 == 0 ){
            cout << arr[i] << " ";
        }
    }
    return 0;
}