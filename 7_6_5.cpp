#include <iostream>
#include <climits>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n; 
    cin >> n;
    int arr[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;  // ������ ���� �� ���� ������ long long���� �ص� ��.
    int idx;
    for(int i = 0; i < n; i++){
        max = INT_MIN;
        for(int j = i; j < n; j++){
            if(max <= arr[j]){  // �ּ� ���� ������ �迭�� ���� �Ǹ� ó�� x
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