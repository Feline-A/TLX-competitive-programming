#include <iostream>

using namespace std;

int main(){
    int n;
    bool prime;
    cin >> n;
    prime = true;
    for(int i=2;i<=n-1;++i){
        if (n%i == 0){
            prime = false;
            break;
        }
    }

    if (n <= 1){
        prime = false;
    }

    if (prime == true){
        cout << "Bilangan Prima\n";
    }
    else{
        cout << "BUKAN Bilangan Prima\n";
    }

    return 0;
}

