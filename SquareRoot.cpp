#include <bits/stdc++.h>
using namespace std;
// here it is for the accuracy of the answer and 1e-6 meaning 10^-6
double eps = 1e-6;

int main()
{
    double x;
    cin >> x;
    double low = 1, high = x;
    double mid;

    while (high - low > eps)
    {
        mid = (high + low) / 2;
        if (mid * mid < x)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    // set the presision
    cout << low << endl;

    // there is also a shortcut of calculating the

    cout << pow(x, 1.0 / 2) << endl;
}
