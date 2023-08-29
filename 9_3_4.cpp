#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    // 숫자 n 주어진다.
    int n;
    cin >> n;
    // n개의 줄 , n개의 문자열 
    string arr[10];

   
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int len_sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){

        len_sum += arr[i].length();
        if( arr[i][0] == 'a') cnt++;
    }

    cout << len_sum << " " << cnt;


    return 0;
}