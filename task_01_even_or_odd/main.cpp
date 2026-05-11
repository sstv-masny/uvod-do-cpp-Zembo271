
#include <iostream>

using namespace std;

int main() {

    long long n;
    if (!(cin >> n)) {
        return 0;
    }

    if (n % 2 == 0) {
        cout << "Parne" << endl;
    } else {
        cout << "Neparne" << endl;
    }

    return 0;
}
