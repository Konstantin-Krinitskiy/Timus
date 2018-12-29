#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a1, a2, a3, b1, b2, b3;

    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;

    int res1 = b1 - b2;
    int res2 = a1 - a3;

    cout << res2 << " " << res1;

    return 0;
}
