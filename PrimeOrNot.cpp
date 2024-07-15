#include <iostream>
using namespace std;

int main()
{

    int i, n, c = 0;

    cout << "Enter a no." << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;
    }

    return 0;
}