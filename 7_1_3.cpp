#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10] = {};
    // 배열에 입력 
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    int sum = 0;
    double avg = 0;
    for (int i = 0; i < 10; i++){
        sum += arr[i];
        if ( arr[i] > 250) {
            sum = sum - arr[i];
            avg = (double)sum / (double) i;
            cout << sum << " ";
            cout << fixed;
            cout.precision(1);
            cout << avg;
            break;
        }
        else {
            if ( i == 9){
                cout << sum << " ";
                avg = (double) sum / 10;
                cout << fixed;
                cout.precision(1);
                cout << avg;
            }
        }
    }
    

    return 0;
}