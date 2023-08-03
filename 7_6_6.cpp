#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int max = arr[0];
    if(arr[0] != arr[1]){
        cout << max;
        return 0;
    }
    for(int i = 1; i < n; i++){
        if(arr[i-1] == arr[i]){
            if(i == n - 1){
                max = -1;
                break;
            }
            continue;
        }
        else {
            max = arr[i];
            if(arr[i] != arr[i+1]) break;
        }
    }
    cout << max;
    return 0;
}