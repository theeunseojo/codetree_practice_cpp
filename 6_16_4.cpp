#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start , end;
    cin >> start >> end;
    int divisor_cnt;// 약수 개수 구하는 변수
    int cnt = 0; // 약수가 3개인 숫자의 개수 구하는 변수

    for (int i = start; i <= end; i++){
        divisor_cnt = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0) divisor_cnt++;
        }
        if (divisor_cnt == 3) cnt++;
    }
    cout << cnt;
    return 0;
}