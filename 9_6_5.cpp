#include <iostream>
#include <string>
using namespace std;

int main() {
    // 문자열 입력 
    string A;
    string B;
    cin >> A;
    cin >> B;

    int len = A.length();
    int cnt = 0;

    for(int i = 0; i < len - 1; i++ ){
        if(A[i] == B[0] && A[i+1] == B[1]){
           cnt++;
        }
    }
    cout << cnt;
}