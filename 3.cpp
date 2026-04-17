#include <iostream>
using namespace std;
int main(){
int a, b;
cin >> a >> b;

if (a > b)
    cout << "Smaller: " << b << "\nLarger: " << a;
else
    cout << "Smaller: " << a << "\nLarger: " << b;
    return 0;
}