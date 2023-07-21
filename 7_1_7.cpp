#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0;    // 평균에서 쓸 갯수

    // 배열에 정수 10개 입력하기
    for(int i = 0; i < 10; i++){    
        cin >> arr[i];
        if(arr[i] == 0) break;
        cnt++;
    }
    int sum = 0;
    double avg = 0;
    for(int i = 0; i < cnt; i++){
        sum += arr[i];
    }
    avg = (double) sum / cnt;
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << avg;


    return 0;
}