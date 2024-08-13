#include <iostream>

using namespace std;

int nomor[10010];

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> nomor[i];
    }

    for(int i=1;i<=n;i++){
        if (nomor[i] < 0){
            cout << nomor[i] << "\n";
        }
    }

    for(int i=1;i<=n;i++){
        if (nomor[i] == 0){
            cout << nomor[i] << "\n";
        }
    }

    for(int i=1;i<=n;i++){
        if (nomor[i] > 0){
            cout << nomor[i] << "\n";
        }
    }
    return 0;
}
