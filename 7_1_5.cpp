#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    double arr[8];
    for(int i = 0; i < 8; i++){
        cin >> arr[i];
    }
    double sum , avg = 0;

    for(int i = 0; i < 8; i++){
        sum += arr[i];
    }
    avg = sum / 8;
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}