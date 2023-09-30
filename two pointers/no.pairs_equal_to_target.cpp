#include <bits/stdc++.h>
using namespace std;
int NumberofPairs(int n)
{
    return floor(n * (n + 1) / 2);
}
int Sum(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int paircnt = 0;
    while (start < end)
    {
        if (arr[start] + arr[end] > target)
        {
            end--;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            if (arr[start] != arr[end])
            {
                int cnt1 = 0, cnt2 = 0;
                int leftel = arr[start];
                int rightEl = arr[end];
                while (arr[start] == leftel)
                {
                    start++;
                    cnt1++;
                }
                while (arr[end] == rightEl)
                {
                    end--;
                    cnt2++;
                }
                paircnt = paircnt + (cnt1 * cnt2);
            }
            if (arr[start] == arr[end])
            {
                paircnt = paircnt + NumberofPairs(end - start);
                return paircnt;
            }
        }
    }
    return paircnt;
}

int main()
{
    vector<int> arr = {1, 4, 4, 5, 5, 5, 6, 6, 11};

    Sum(arr, 11);
}