#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 0; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    int ans = num / denom;
    return ans;
}
int main()
{
    int n, r;
    cout << "Enter value of n and r:" << endl;
    cin >> n >> r;
    cout << "Answer: " << nCr(n, r) << endl;
    return 0;
}