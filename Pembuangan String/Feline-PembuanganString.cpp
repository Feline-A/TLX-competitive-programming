#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int a = t.size();
    while(s.find(t) != -1){
        s.erase(s.find(t), a);
    }

    cout << s << "\n";
    return 0;
}
