
#include <iostream>
using namespace std;
int main() {

    unsigned long long n;
    if (!(cin >> n))
        return 0;
    long long reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    cout << reversed << endl;
    // TODO: reverse using % and /, not strings
    return 0;
}
