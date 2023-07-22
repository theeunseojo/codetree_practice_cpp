#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    // 입력 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // 출력 
    for(int i = n - 1; i >= 0; i--){    // n 과 n -1 차이 
        if(arr[i] % 2 == 0 ){
            cout << arr[i] << " ";
        }
    }
    return 0;
}