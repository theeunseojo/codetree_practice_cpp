#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1000];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int prev_max_idx = n;
    while(true){
        int max_idx = 0;
        for(int i = 1; i < prev_max_idx; i++){
            if(arr[i] > arr[max_idx]){
                max_idx = i;
            }
        }
        cout << max_idx + 1 << " ";

        if(max_idx == 0) break;
        prev_max_idx =  max_idx; 
        

    }
    return 0;
}