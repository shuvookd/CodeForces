#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    int mini(a), maxi(a), minimum(0), maximum(0);
    for (int i = 1; i < n; ++i)
    {
        cin >> a;
        if (a > maxi)
        {
            maxi = a;
            maximum = i;
        }
        if (a <= mini)
        {
            mini = a;
            minimum = i;
        }
    }
    cout << maximum + (n - 1 - minimum) - (minimum < maximum ? 1 : 0) << endl;
    return 0;
}
