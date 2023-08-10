#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[10][10] ={};
    int cnt = 1;
    int row = 0;
    for(int j = n - 1; j >= 0; j--){
        row++;
        if(row % 2 == 0){
            for(int i = 0; i < n; i++){
                arr[i][j] = cnt ;
                cnt++;
            }
        }
        else{
            for(int i = n - 1; i >= 0; i--){
                arr[i][j] = cnt ;
                cnt++;
            }
        }
 
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}