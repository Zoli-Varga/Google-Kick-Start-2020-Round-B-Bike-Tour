#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int res[100];

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        int heights[100];

        for (int j = 0; j < t; j++)
        {
            int temp;
            cin >> temp;
            heights[j] = temp;
        }

        int num = 0;

        for (int j = 1; j < t-1; j++)
        {
            if (heights[j] > heights[j - 1] && heights[j] > heights[j + 1])
            {
                num++;
            }
        }

        res[i] = num;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Case #" << i + 1 << ": " << res[i] << "\n";
    }

    return 0;
}