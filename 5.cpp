#include <iostream>
using namespace std;
int main(){
	double num1, num2;
cin >> num1 >> num2;

if (num2 != 0)
    cout << "Result = " << num1 / num2;
else
    cout << "Division by zero is not possible.";
    return 0;
}