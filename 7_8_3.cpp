#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr1[10][10];
    int arr2[10][10];
    int new_arr[10][10] = { };

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr1[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i][j] != arr2[i][j]) new_arr[i][j] = 1;
            else continue;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << new_arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}