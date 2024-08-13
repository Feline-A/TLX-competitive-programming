#include <iostream>

using namespace std;

int f(int x){
    if (x == 1){
        return 1;
    }
    else if(x%2==0){
        return f(x-1) * (x/2);
    }
    else{
        return f(x-1) * x;
    }
}


int main(){
    int n;
    cin >> n;
    cout << f(n) << "\n";
    return 0;
}
