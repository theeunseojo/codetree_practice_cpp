#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
    return 0;
}