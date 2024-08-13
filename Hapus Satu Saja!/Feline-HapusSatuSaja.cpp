#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string a, b;
    bool check = false;
    cin >> a >> b;
    string x = a;
    int d = a.length();
    int f = b.length();
    if (abs(d-f) == 1){
        for(int i=0;i<=a.length()&& !check;i++){
            x.erase(i, 1);
            if (x == b){
                check = true;
            }
            x = a;
        }
    }
    if(check == true){
        cout << "Tentu saja bisa!\n";
    }
    else{
        cout << "Wah, tidak bisa :(\n";
    }
    return 0;
}
