#include <iostream>
#include <string>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

bool checkWildCard(string x, string y){
    if (x.length()-1 > y.length()){ return false; }
    int idx = x.find('*');
    //Check Front
    for (int i = 0; i < idx; ++i) {
        if (x[i] != y[i]) { return false; }
    }
    //Check Back
	int pos = y.length()-1;
    for (int i = x.length()-1; i > idx; --i) {
        if (x[i] != y[pos]) { return false; }
		pos--;
    }
    return true;
}

int main(){
    FASTIO
    string wild, inp;
    int n;
    cin >> wild;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> inp;
        if (checkWildCard(wild, inp)){
            cout << inp << "\n";
        }
    }
    return 0;
}
