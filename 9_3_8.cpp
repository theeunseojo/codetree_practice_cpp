#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    // 입력 
    string arr[10];
    char a;

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cin >> a;
    
    bool isNone = true;
    for(int i = 0; i < 10; i++){
        int len = arr[i].length();
        if(arr[i][len - 1] == a) {
            isNone = false;
            cout << arr[i] <<endl;
        }
        if( isNone == true && i == 9 ) cout << "None";
    }
    return 0;
}