#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cout << "Enter a no." << endl;
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNo = a + b;
        cout << nextNo << " ";
        a = b;
        b = nextNo;
    }

    return 0;
}