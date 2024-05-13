#include <iostream>
#include <vector>
using namespace std;

vector<int> sprial(vector<vector<int>> matrix)
{
    vector<int> ans;
    int m = matrix.size();
    if (m == 0)
        return ans; // Handle empty matrix case
    int n = matrix[0].size();
    int totalElements = m * n;

    int startRow = 0;
    int endCol = n - 1;
    int endRow = m - 1;
    int startCol = 0;

    int count = 0;
    while (count < totalElements)
    {
        // Printing starting row
        for (int i = startCol; i <= endCol && count < totalElements; i++)
        {
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;

        // Printing ending column
        for (int i = startRow; i <= endRow && count < totalElements; i++)
        {
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;

        // Printing ending row
        for (int i = endCol; i >= startCol && count < totalElements; i--)
        {
            ans.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;

        // Printing starting column
        for (int i = endRow; i >= startRow && count < totalElements; i--)
        {
            ans.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

int main()
{

    vector<vector<int>> v;
    vector<int> a{1, 2, 3, 9};
    vector<int> b{4, 5, 6, 2};
    vector<int> c{7, 8, 9, 11};
    vector<int> d{10, 11, 12, 1};
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    vector<int> ans = sprial(v);
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}