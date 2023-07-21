#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; // 과목 수 
    cin >> n;
    double score_arr[5];
    for (int i = 0; i < n; i++){
        cin >> score_arr[i];
    }

    double avg = 0;
    double sum = 0;
    for (int i = 0; i < n; i++){   // 학점 총합 구하기 
        sum += score_arr[i];
    }
    avg = sum / n;                 // 평균 학점 

    
    
    cout << fixed;
    cout.precision(1);
    cout << avg << endl; 

    if (avg >= 4.0) cout << "Perfect";
    else if ( avg < 4.0 && avg >= 3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}