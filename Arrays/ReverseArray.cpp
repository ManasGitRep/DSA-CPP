#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArry(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    reverseArray(num, size);
    printArry(num, size);
    return 0;
}