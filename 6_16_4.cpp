#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int start , end;
    cin >> start >> end;
    int divisor_cnt;// ��� ���� ���ϴ� ����
    int cnt = 0; // ����� 3���� ������ ���� ���ϴ� ����

    for (int i = start; i <= end; i++){
        divisor_cnt = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0) divisor_cnt++;
        }
        if (divisor_cnt == 3) cnt++;
    }
    cout << cnt;
    return 0;
}