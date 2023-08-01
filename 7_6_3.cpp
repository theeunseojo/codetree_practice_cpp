#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int idx ;
    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 999 || arr[i] == -999){
            idx = i;
            break;
        }
    }
    int min , max = arr[0];
    for(int i = 0; i < idx; i++){
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max  = arr[i];
    }
    cout << max << " " << min;
    return 0;
}