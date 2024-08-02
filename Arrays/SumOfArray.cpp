#include <iostream>
using namespace std;
int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
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

    cout << "Sum of elements in array are: " << getSum(num, size) << endl;
    return 0;
}