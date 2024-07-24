#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter a no. to find binary: " << endl;
    cin >> n;

    if (n < 0)
    {
        n = -n;
    }
    int m = ~n;
    int i = 0;
    int bit;
    long int ans = 0;

    while (m != 0)
    {
        bit = m & 1;
        ans = (bit * pow(10, i) + ans);
        m = m >> 1;
        i++;
    }
    ans = ans + 1;
    cout << "Answer: " << endl;

    return 0;
}