
#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s;
    if (!std::getline(std::cin, s))
        return 0;
    getline(cin, s);

    sstring t;

    for (char c : s) {
        if (isalnum((unsigned char)c)) {
            t += tolower((unsigned char)c);
        }
    }

    bool pal = true;
    int l = 0, r = (int)t.size() - 1;

    while (l < r) {
        if (t[l] != t[r]) {
            pal = false;
            break;
        }
        l++;
        r--;
    }

    cout << (pal ? "YES" : "NO");
    return 0;
}
