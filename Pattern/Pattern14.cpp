#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a no." << endl;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + col - 1;
            cout << ch;

            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}