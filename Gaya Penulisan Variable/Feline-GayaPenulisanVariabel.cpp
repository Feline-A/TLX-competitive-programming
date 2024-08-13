#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, res, a;
    cin >> s;
    res = "";
    if(s.find("_") == -1){ //Camel Case -> Snake Case
        for(int i=0;i<s.size();i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                res += "_";
            }
            res += tolower(s[i]);
        }
        cout << res << "\n";
    }
    else{ //Snake Case -> Camel Case
        while(s.find("_") != -1){
            a = char(int(s[s.find("_")+1]-32));
            s.insert(s.find("_"), a);
            s.erase(s.find("_"), 2);
        }
        cout << s << "\n";
    }
    return 0;
}
