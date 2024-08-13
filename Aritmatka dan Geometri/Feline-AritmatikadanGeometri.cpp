#include <iostream>

using namespace std;

int main(){
    int t, a, b, c, i;
    int arit, geo;
    cin >> t;
    for(i=1;i<=t;i++){
        cin >> a >> b >> c;
        if(b - a == c - b){
            arit = b - a;
            cout << c + arit << "\n";
        }
        else{
            geo = b / a;
            cout << c * geo << "\n";
        }
    }
    return 0;
}
