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
        int count = row;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}