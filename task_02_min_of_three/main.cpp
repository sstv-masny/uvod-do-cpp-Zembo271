
#include <iostream>
using namespace std;
int main() {

    long long a, b, c;
    if (!(cin >> a >> b >> c))
        return 0;
    cout << min(a, min(b, c)) << endl;
    // TODO: print the minimum of a, b, c
    return 0;
}
