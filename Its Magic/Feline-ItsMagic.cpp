#include <iostream>

using namespace std;

int main(){
    int k, n;
    cin >> k >> n;
    cout << "Think of a number, any number\n";
    cout << "Multiply it by " << k << "\n";
    cout << "Add " << k * n <<  " to your number\n";
    cout << "Now, divide your total by " << k << "\n";
    cout << "Finally, subtract the result from the first number you pick\n";
    cout << "BRAVO!!!\n";
    cout << "Your answer is " << n << "\n";
    return 0;
}
