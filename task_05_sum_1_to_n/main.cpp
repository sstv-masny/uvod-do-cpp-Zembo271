
#include <iostream>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    if (!(std::cin >> n))
        return 0;
    cin >> n;
    cout << n * (n + 1) / 2 << endl;
    // TODO: compute sum 1..n (watch overflow; use 64-bit)
    return 0;
}
