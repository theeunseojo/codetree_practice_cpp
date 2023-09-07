#include <iostream>
#include <string>
using namespace std;

int main() {
    // 문자열 입력
    string s;
    cin >> s;
    //질의 개수 입력
    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        for(int j = 0; j < 2; j++){
            int q_type;
            cin >> q_type;

            if(q_type == 1){
                int first;
                int second;
                cin >> first >> second;

                char temp = s[first - 1]; // a번째 
                s[first - 1] = s[second - 1];
                s[second - 1] = temp;
                cout << s << endl;
                break;
            }
            else if(q_type == 2){
                char a;
                char b;
                cin >> a >> b;
                for(int i = 0; i < s.length(); i++){
                    if(s[i] == a){
                        s[i] = b;
                    }
                }
                cout << s << endl;
                break;
            }
        }
    }
    return 0;
}