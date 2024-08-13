#include <iostream>

using namespace std;

int main(){
    int k, a;
    string s, res;
    cin >> s;
    cin >> k;
    a = 0;
    for(int i=0;i<s.size();i++){
        a = int(s[i]) + k;
        if (a > 122){
            a = (a - 122) + 96;
            cout << char(a);
        }
        else{
            cout << char(a);
        }
    }
    cout << "\n";
    return 0;
}
