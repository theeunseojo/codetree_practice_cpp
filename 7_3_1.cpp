#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;
    int arr[100];
    for(int i =0; i < n; i++){
        cin >> arr[i];
        cout << arr[i] * arr[i] << " ";
    }
    
    return 0;
}