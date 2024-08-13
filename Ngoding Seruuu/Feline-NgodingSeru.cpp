#include <iostream>

using namespace std;

int main(){
    int smallL;
    bool num;
    string s, temp, res;

    getline(cin, s);
    temp = res = "";
    num = false; smallL = 0;

    for(int i=0;i<s.size();i++){
        if (s[i] != ' ' && s[i] != '.'){
            temp += s[i];
            if (s[i] >= 'a' && s[i] <= 'z'){
                smallL++;
            }
            else if (s[i] >= '0' && s[i] <= '9'){
                num = true;
            }
        }
        else{
            if (smallL >= 3 && num == true &&
                res.size() < temp.size()){
                res = temp;
            }
            temp = "";
            num = false; smallL = 0;
        }
    }
    if (res.size() == 0){
        cout << "NO\n";
    }
    else{
        cout << res << "\n";
        cout << res.size() << "\n";
    }
    return 0;
}

