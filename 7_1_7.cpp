#include <iostream>
using namespace std;
int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int arr[10];
    int cnt = 0;    // ��տ��� �� ����

    // �迭�� ���� 10�� �Է��ϱ�
    for(int i = 0; i < 10; i++){    
        cin >> arr[i];
        if(arr[i] == 0) break;
        cnt++;
    }
    int sum = 0;
    double avg = 0;
    for(int i = 0; i < cnt; i++){
        sum += arr[i];
    }
    avg = (double) sum / cnt;
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << avg;


    return 0;
}