
#include <iostream>
using namespace std;
int main() {

    long long y;
    if (!(cin >> y))
        return 0;
    if (y % 4 == 0 && y % 100 != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
