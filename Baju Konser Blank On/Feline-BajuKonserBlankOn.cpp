#include <iostream>

using namespace std;

int main(){
    int b, p, l;
    cin >> b >> p >> l;
    if (b <= 10 && p <= 40 && l <= 90){
        cout << "S\n";
    }
    else if(b <= 14 && p <= 60 && l <= 120){
        cout << "M\n";
    }
    else if(b <= 18 && p <= 80 && l <= 180){
        cout << "L\n";
    }
    else if(b <= 25 && p <= 100 && l <= 220){
        cout << "X\n";
    }
    else{
        cout << "X\n";
    }
    return 0;
}
