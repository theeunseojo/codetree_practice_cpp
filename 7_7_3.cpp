#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    double row_mean , col_mean , mean = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }
    int sum;
    for(int i = 0; i < 2; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        row_mean = (double)sum / 4;
        cout << fixed;
        cout.precision(1);
        cout << row_mean << " ";
    }
    cout << endl;
    for(int j = 0; j < 4; j++){
        sum = 0;
        for(int i = 0; i < 2; i++){
            sum += arr[i][j];
        }
        col_mean = (double)sum / 2;
        cout << fixed;
        cout.precision(1);
        cout << col_mean << " ";
    }
    cout << endl;
    sum = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }
    mean = (double)sum / (2 * 4);
    cout << fixed;
    cout.precision(1);
    cout << mean;
    // arr[0][j] arr[1][j] arr[i][0] arr[i][1]  arr[i][2] arr[i][3]

    return 0;
}