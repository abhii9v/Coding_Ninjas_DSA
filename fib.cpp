#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 1;
    int sum,n = 0;
    cin >> n;
    for (int i = 0; i < n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << sum;
}