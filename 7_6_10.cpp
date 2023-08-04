#include <iostream>
#define MAX_IDX 1000
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_IDX];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int price_max = 0;
    int price;
    int min_idx = 0; 
    int max_idx = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[min_idx]) min_idx = i;
        for(int j = min_idx + 1; j < n; j++){
            if(arr[j] > arr[min_idx]) max_idx = j;
            price = arr[max_idx] - arr[min_idx];
            if(price_max < price) price_max = price;
        }
    }
    if(min_idx < max_idx){
        if(price_max <= 0) cout << 0;
        else cout << price_max;
    }
    else cout << 0;
    return 0;
}