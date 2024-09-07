#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, largest = 0;
    cout << "enter the size of an array:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "largest element =" << largest << endl;

    return 0;
}