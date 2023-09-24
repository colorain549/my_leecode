// 977.有序数组的平方
// https://leetcode.cn/problems/squares-of-a-sorted-array/
// 参考: 代码随想录

#include <vector>
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
using std::sort;
using std::vector;

// 暴力破解 O(nlogn), O(n + nlogn)
// class Solution
// {
// public:
//     vector<int> sortedSquares(vector<int> &nums)
//     {
//         int len = nums.size();
//         for (int i = 0; i < len; i++)
//         {
//             nums[i] = nums[i] * nums[i];
//         }
//         sort(nums.begin(), nums.end());
//         return nums;
//     }
// };

// 双指针法
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        int k = nums.size() - 1;
        int len = nums.size();
        vector<int> newNums(len, 0);
        while (i != j + 1)
        {
            if (nums[i] * nums[i] < nums[j] * nums[j])
            {
                newNums[k] = nums[j] * nums[j];
                j--;
                k--;
            }
            else
            {
                newNums[k] = nums[i] * nums[i];
                i++;
                k--;
            }
        }
        return newNums;
    };
};

int main()
{
    vector<int> ivec = {-4, -1, 0, 3, 10};
    vector<int> ivec2 = {-7, -3, 2, 3, 11};

    vector<int> newArr;
    vector<int> newArr2;

    Solution solution;
    newArr = solution.sortedSquares(ivec);
    for (auto it = newArr.begin(); it != newArr.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    newArr2 = solution.sortedSquares(ivec2);
    for (auto it = newArr2.begin(); it != newArr2.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}