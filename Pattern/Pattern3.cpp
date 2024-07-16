#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number:" << endl;
    cin >> n;
    int i = 1;
    cout << "pattern::" << endl;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}