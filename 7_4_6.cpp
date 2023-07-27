#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a , b ;
    cin >> a >> b;
    int arr[100];
    int count_arr[101] = {};
    for(int i = 0; i < 100; i++){
        if(a <= 1) break;
        arr[i] = a % b;
        a = a / b;
        count_arr[arr[i]]++;
    }
    int sum  = 0;
    for(int i = 0; i < 101; i++){
        count_arr[i] = count_arr[i] * count_arr[i];
        sum += count_arr[i];
    }
    cout << sum;
    return 0;
}