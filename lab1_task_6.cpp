#include <iostream>

using namespace std;

int main() {
    int n;
    // вводим
    cout << "insert n" << endl;
    cin >> n; 

    int orig = n;
    int rev = 0;

    // переворачиваем
    while (n > 0) {
        rev = (rev * 2) + (n % 2); 
        n = n / 2;                 
    }

    // сравниваем
    if (rev == orig) 
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}