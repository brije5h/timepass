#include <iostream>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    int n, m, k, arr[];
    int str[100] = {0};
    int count;
    while (t--)
    {
        cin >> n >> m >> k;
        for (i = 0; i < k; k++)
        {
            cin >> arr[k];
        }
        for (i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (arr[i] == arr[j])
                {
                    str[i] = arr[j];
                    arr[i] = -1;
                    count += 1;
                }
            }
            cout << count << " ";
            for (i = 0; i < 100; i++)
            {
                cout << str[i] << " ";
            }
        }
    }
    return 0;
}