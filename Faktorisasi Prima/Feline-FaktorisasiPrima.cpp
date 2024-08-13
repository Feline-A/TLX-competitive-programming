#include <iostream>

using namespace std;

void solve(int x){
    int ct;
    int divv = 1;
    while (x > 1){
        divv++;
        ct = 0;
        while (x % divv == 0){
            ct++;
            x /= divv;
        }
        if (ct > 0){
            cout << divv;
            if (ct > 1){
                cout << "^" << ct;
            }
            if (x > 1){
                cout << " x ";
            }
        }
    }
    cout << "\n";
}

int main(){
    int num;
    cin >> num;
    solve(num);
    return 0;
}

