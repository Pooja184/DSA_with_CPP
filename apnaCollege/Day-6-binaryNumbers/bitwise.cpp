#include <iostream>
using namespace std;

int main()
{
    //   6 → 0110
    //  10 → 1010
    // -----------
    // XOR 1100 → Decimal 12

    // Example for XOR
    // int a=6,b=10;
    // cout<<(a^b)<<endl;

    // Right shift operation: a >> b
    // This moves the bits of 'a' to the right by 'b' positions.
    // For example:
    // a = 10 → binary: 1010
    // Shift right by 1 → 0101 → decimal: 5
    int a = 10, b = 1;
    cout << (a >> b);
    return 0;
}