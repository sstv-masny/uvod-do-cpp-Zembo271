
#include <cstdlib>
#include <iostream>
long long gcdll(long long a, long long b) {
    // TODO: Euclid's algorithm (handle negatives)
    return 1;
}
int main() {
    using namespace std;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long p, q;
    if (!(std::cin >> p >> q))
        return 0;
    cin >> p >> q;

    long long a = llabs(p);
    long long b = llabs(q);

    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }

    p /= a;
    q /= a;

    if (q < 0) {
        p = -p;
        q = -q;
    }

    cout << p << " " << q;
    // TODO: reduce, ensure q'>0, and print p' q'
    return 0;
}
