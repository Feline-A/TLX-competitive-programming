#include <iostream>

using namespace std;

int main(){
    string s;
    int a;
    cin >> s;
    for(int i=0;i<s.size();i++){
        a = int(s[i]);
        if (a >= 65 && a <= 90){
            cout << char(a + 32);
        }
        else{
            cout << char(a - 32);
        }
    }
    cout << "\n";
    return 0;
}
