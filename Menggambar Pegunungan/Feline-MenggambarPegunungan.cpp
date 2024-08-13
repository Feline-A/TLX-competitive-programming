#include <iostream>

using namespace std;

void gunung(int x){
    if (x == 1){
        cout << "*\n";
    }
    else{
        gunung(x-1);
        for(int i=1;i<=x;i++){
            cout << "*";
        }
        cout << "\n";
        gunung(x-1);
    }

}

int main(){
    int n;
    cin >> n;
    gunung(n);

    return 0;
}
