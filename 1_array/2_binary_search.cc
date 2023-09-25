// 704.二分查找
// https://leetcode.cn/problems/binary-search/
// 参考: 代码随想录

#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

// 左闭右闭
// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         int low = 0;
//         int high = nums.size() - 1;
//         while (low <= high)
//         {
//             int mid = (low + high) / 2;
//             if (nums[mid] == target)
//             {
//                 return mid;
//             }
//             else if (nums[mid] < target)
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//         return -1;
//     }
// };

// 左闭右开
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> ivec = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    Solution solution;
    int result = solution.search(ivec, target);

    cout << result << endl;

    return 0;
}
