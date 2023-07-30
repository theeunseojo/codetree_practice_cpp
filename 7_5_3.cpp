#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n , q;
    cin >> n >> q;
    int arr[100];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ques;
    for(int i = 0; i < q; i++){
        cin >> ques;
        if(ques == 1){
            int a;
            cin >> a;
            cout << arr[a - 1] << endl;
        }
        else if(ques == 2){
            int a;
            cin >> a;
            int idx = -1;
            for(int i = 0; i < n; i++){
                if(arr[i] == a){
                    cout << i + 1 << endl;
                    idx = i;
                    break;
                }
            }
            if( idx == -1) cout << 0 << endl;
        }
        else {
            int a , b;
            cin >> a >> b;
            for(int i = a - 1 ; i < b; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}