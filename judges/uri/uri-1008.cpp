#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int number, amounts;
    double hours, salary;
    
    cin >> number;
    cin >> amounts;
    cin >> hours;

    salary = amounts * hours;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
    return 0;
}
