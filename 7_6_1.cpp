#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[10];
    int max_val = 0;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        if(max_val < arr[i]){
            max_val = arr[i];
        }
    }

    cout << max_val;
    
    return 0;
}