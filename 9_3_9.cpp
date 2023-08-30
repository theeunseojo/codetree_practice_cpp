#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string arr[20];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    char a;
    cin >> a;

    int cnt = 0;
    double mean = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i][0] == a){
            cnt++;
            sum += arr[i].length();
            mean = (double)sum / cnt;
        }
    }

    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << mean;

    return 0;
}