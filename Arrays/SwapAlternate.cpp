#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int size;
    cout << "enter the size of array:";
    cin >> size;
    int num[100];
    cout << "enter array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "after swapping alternate elements:" << endl;
    swapAlternate(num, size);
    printArr(num, size);
    return 0;
}