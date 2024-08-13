#include <iostream>

using namespace std;

string kata;

bool palindrom(int lf, int rg){
    if (lf >= rg){
        return true;
    }
    else if(kata[lf] == kata[rg]) {
        return palindrom(lf+1, rg-1);
    }
    return false;
}

int main(){
    getline(cin, kata);
    int z = 0;
    for(int i=0;i<kata.size();i++){
        int x = kata.size()-1;
        if (kata[i] == ' '){
            x = i-1;
            if (palindrom(z, x) == true){
                for(int j=z;j<=x;j++){
                    cout << kata[j];
                }
                cout << " ";
            }
            z = x+2;
        }
        else if (i == x){
            if (palindrom(z, x) == true){
                for(int j=z;j<=x;j++){
                    cout << kata[j];
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
