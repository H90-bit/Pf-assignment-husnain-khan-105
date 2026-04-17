#include <iostream>
using namespace std;
int main(){
double a = 10, b = 10;

a = a + 0.2;

if (a > b)
    cout << "a is larger\nb is smaller";
else
    cout << "b is larger\na is smaller";
return 0;
}