#include <iostream>
using namespace std;

int rere() {
    int x , y , summ ;
    cout << "Enter the numbers(x & y) " <<"\n";
    cin >> x;
    cout << "SEcond number";
    cin >> y ;
    summ = x + y;
    cout << summ;
}

int main() {
    cout << "Addition result ";
    rere();
}