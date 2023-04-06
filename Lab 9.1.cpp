#include <iostream>

using namespace std;

int Sum(int);
int main()
{
    int n;
    int sum = 0;
    cout << "Enter an integar: ";
    cin >> n;

    sum = Sum(n);
    cout << "The sum is: " << sum << endl;
}
int Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
