#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char cold;
    int arr[3]; // 온도 
    int count_arr[5] ={};   // 진료소 인원 
    for(int i = 0; i < 3; i++){
        cin >> cold;
        cin >> arr[i];
        if(cold == 'Y' && arr[i] >= 37){
            arr[i] = 1;
            count_arr[arr[i]]++;
        }
        else if(cold == 'N' && arr[i] >= 37){
            arr[i] = 2;
            count_arr[arr[i]]++;
        }
        else if(cold == 'Y' && arr[i] < 37){
            arr[i] = 3;
            count_arr[arr[i]]++;
        }
        else {
            arr[i] = 4;
            count_arr[arr[i]]++;
        }
    }


    //  출력 
    for(int i = 1; i < 5; i++){
        cout << count_arr[i] << " ";
    }
    if(count_arr[1] >= 2) cout << "E";

    return 0;
}