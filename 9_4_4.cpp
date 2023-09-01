#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    // 문자열 입력
    string A;
    cin >> A;

    int len = A.length();

    int cnt = 0;
    char com_alpha = A[0];


    string B;
    B[0] = A[0];

   string input = to_string(cnt);
    // Run Length 인코딩 후 길이
    for(int i = 0; i < len; i++){
        if(com_alpha == A[i]) cnt++;

        else if(com_alpha != A[i]){
           
            input = to_string(cnt);
            B += com_alpha + input;
            com_alpha = A[i];
            cnt = 1;
            
        }
    }
    input = to_string(cnt);
    B += com_alpha + input;
    cout << B.length()<< endl;

    com_alpha = A[0];
    cnt = 0;
    // 비교 알파벳 같으면 갯수 증가 , 다르면 비교 알파벳 변경 하고 갯수 초기화

    for(int i = 0; i < len; i++){
        if(com_alpha == A[i]){
            cnt++;
        }
        else if(com_alpha != A[i]){
            cout << com_alpha << cnt;
            com_alpha = A[i];
            cnt = 1;
        }
    }
    
    // 예외처리
    cout << com_alpha << cnt;

    
    return 0;
}