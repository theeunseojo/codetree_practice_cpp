#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.  
    int arr[10] = {};    // 10���� ���� 
    int cnt = 0;    // ���� 

    // �Է�
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    // ��� 
    int sum = 0;
    for(int i = 0; i < 10; i++){
        if( arr[i] == 0) break;
        else {
            if(arr[i] % 2 == 0){
                sum += arr[i];
                cnt++;
            }
        }
    }
    cout << cnt << " " << sum;
    return 0;
}