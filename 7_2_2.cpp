#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[10];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    int sum = 0 ;
    for(int i = 1; i < 10; i += 2){  
        sum += arr[i];
    }
    cout << sum << " ";
    int cnt = 0;
    sum = 0;
    for(int i = 2; i < 10; i += 3){
        sum += arr[i];
        cnt++;
    }
    double avg = (double)sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}