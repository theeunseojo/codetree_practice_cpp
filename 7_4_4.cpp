#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[100];
    int count_arr[11] = {};
    int zero_point;
    
    // �Է�
    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            zero_point = i;
            break;
        }
        arr[i] = arr[i] / 10;
    }
    // ������ �л� �� ���ϱ�
    for(int i = 0; i < zero_point; i++){
        count_arr[arr[i]]++;
    }
    // ���
    for(int i = 10; i >= 1; i--){
        cout << i * 10 << " - " << count_arr[i] << endl;
    }
    return 0;
}