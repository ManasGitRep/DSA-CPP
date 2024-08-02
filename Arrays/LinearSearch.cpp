#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    int key;
    cout << "Enter the key you want to search in the array" << endl;
    cin >> key;
    bool found = search(num, size, key);
    if (found == true)
    {
        cout << "Key is present in the Array" << endl;
    }
    else
    {
        cout << "key is Absent in the Array" << endl;
    }

    return 0;
}