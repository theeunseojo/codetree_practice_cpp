#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.  
    int arr[10] = {};    // 10개의 정수 
    int cnt = 0;    // 개수 

    // 입력
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    // 출력 
    int sum = 0;
    for(int i = 0; i < 10; i++){
        if( arr[i] == 0) break;
        else {
            if(arr[i] % 2 == 0){
                sum += arr[i];
                cnt++;
            }
        }
    }
    cout << cnt << " " << sum;
    return 0;
}