#include <iostream>
#include <climits>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n;
    cin >> n;
    
    int arr[100];

    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(min > arr[i]){
            min = arr[i];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(min == arr[i]){
            cnt++;
        }
    }
    cout << min << " " << cnt;
    
   

    return 0;
}