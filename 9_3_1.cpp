#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char a;
    cin >> a;

    int count = 0;

    for(int i = 0; i < 5; i++){
        int len = arr[i].length();
        for(int j = 0; j < len; j++){
            if(a == arr[i][2] || a == arr[i][3]) {
                cout << arr[i] << endl;
                count++;
                break;
            }
        }
    }

    cout << count;
    return 0;
}