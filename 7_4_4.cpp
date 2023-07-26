#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int count_arr[11] = {};
    int zero_point;
    
    // 입력
    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            zero_point = i;
            break;
        }
        arr[i] = arr[i] / 10;
    }
    // 점수대 학생 수 구하기
    for(int i = 0; i < zero_point; i++){
        count_arr[arr[i]]++;
    }
    // 출력
    for(int i = 10; i >= 1; i--){
        cout << i * 10 << " - " << count_arr[i] << endl;
    }
    return 0;
}