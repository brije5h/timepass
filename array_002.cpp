#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pre = arr[1] - arr[0];
    int count = 2;
    int prev_count=count;

    for (int i = 2; i < n; i++)
    {
        if ((arr[i] - arr[i - 1]) == pre)
        {
            count++;
        }
        else
        {
            count=2;
            pre = arr[i]-arr[i-1];
        }
        prev_count = max(count, prev_count);
    }
    cout << prev_count;

    return 0;
}