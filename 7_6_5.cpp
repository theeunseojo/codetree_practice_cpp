#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;
    int arr[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;  // 정수가 가질 수 없는 범위로 long long으로 해도 댐.
    int idx;
    for(int i = 0; i < n; i++){
        max = INT_MIN;
        for(int j = i; j < n; j++){
            if(max <= arr[j]){  // 최소 값이 나머지 배열에 들어가게 되면 처리 x
                max = arr[j];
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = max;
        arr[idx] = temp;
    }
    cout << arr[0] << " " << arr[1];
    return 0;
}