#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    if(s.find("ideafuse") != -1){
        cout << s.find("ideafuse") + 1 << "\n";
    }
    else{
        cout << "-1\n";
    }
    return 0;
}
