
#include <iostream>
#include <vector>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    if (!(std::cin >> n))
        return 0;
    cin >> n;

    int freq[101] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) {
            cout << i << " " << freq[i] << "\n";
        }
    }
}
