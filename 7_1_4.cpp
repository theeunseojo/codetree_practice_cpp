#include <iostream>
using namespace std;

int main() {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int n; // ���� �� 
    cin >> n;
    double score_arr[5];
    for (int i = 0; i < n; i++){
        cin >> score_arr[i];
    }

    double avg = 0;
    double sum = 0;
    for (int i = 0; i < n; i++){   // ���� ���� ���ϱ� 
        sum += score_arr[i];
    }
    avg = sum / n;                 // ��� ���� 

    
    
    cout << fixed;
    cout.precision(1);
    cout << avg << endl; 

    if (avg >= 4.0) cout << "Perfect";
    else if ( avg < 4.0 && avg >= 3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}