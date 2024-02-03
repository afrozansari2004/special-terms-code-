#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {0, 5, 0, 0, 0},
        {0, 0, 8, 0, 0},
        {0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0},
    };

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] != 0)
            {
                cout << "(" << i << "," << j << ")"
                     << ": " << arr[i][j] << endl;
            }
        }
    }

    return 0;
}