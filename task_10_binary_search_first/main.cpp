
#include <iostream>
#include <vector>
using namespace std;
int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    if (!(std::cin >> n))
        return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    long long x;
    cin >> x;
    int l = 0, r = n - 1;
    int ans = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] == x) {
            ans = m;
            r = m - 1;
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    cout << ans;
    return 0;
}
