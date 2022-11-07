#include <bits/stdc++.h>
using namespace std;

void sum(int n)
{
    if (n == 0)
        return;

    sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    sum(n);
    cout << n + sum(n);
}
