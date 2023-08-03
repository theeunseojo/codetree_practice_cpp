#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    int min = 1001;
    int max = 0;

    for(int i = 0; i < 100; i++){
        if( min > arr[i] && arr[i] > 500 ){
            min = arr[i];
        }
        if( max < arr[i] && arr[i] < 500){
            max = arr[i];
        }
    }
    cout << max << " " << min;
    return 0;
}