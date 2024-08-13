#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n == 0){
        cout << "nol\n";
    }else if (n > 0){
        cout << "positif\n";
    }else{
        cout << "negatif\n";
    }
    return 0;
}
