
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    long long k;
    if (!(std::cin >> k))
        cin >> k = 0;
    double fare;
    if (k <= 2) {
        fare = 4.00;
    } else {
        fare = 4.00 + 1.50 * (k - 2);
    }
    cout << fare;
    fare return 0;
    // TODO: compute the fare as specified and print with two decimals
    return 0;
}
