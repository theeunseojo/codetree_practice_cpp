#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101];
    int n;
    cin >> n;
    int pp = arr[1] = 1;
    int p = arr[2] = n;
    cout << arr[1] << " " << arr[2] << " ";

    for(int i = 3; i < 101; i++){
        arr[i] = pp + p;
        pp = p;
        p = arr[i];
        cout << arr[i] << " ";
        if(arr[i] >= 100) break;
    }

    return 0;
}