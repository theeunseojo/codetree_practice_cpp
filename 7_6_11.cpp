#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;
    int arr[10];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = 100;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int sub = arr[j] - arr[i];
            if(sub < min) min = sub;
        }
    }
    cout << min;
    return 0;
}