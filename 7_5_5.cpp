#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;
    int arr[100];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 2){
            cnt++;
            if(cnt == 3) {
                cout << i + 1;
                break;
            }
        }
    }
    return 0;
}