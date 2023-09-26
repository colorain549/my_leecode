// LCR 122.路径加密
// https://leetcode.cn/problems/ti-huan-kong-ge-lcof/
// 参考: 代码随想录

#include <iostream>

using std::cout;
using std::endl;
using std::string;

// 使用双指针
class Solution
{
public:
    string pathEncryption(string path)
    {
        // 原字符串长度
        int len = path.size();

        // 新字符串长度
        string newPath;
        newPath.resize(len);

        // 原字符串最大下标
        int i = len - 1;

        // 新字符串最大下标
        int j = len - 1;

        while (i >= 0)
        {
            if (path[i] == '.')
            {
                newPath[j--] = ' ';
                i--;
            }
            else
            {
                newPath[j--] = path[i--];
            }
        }
        return newPath;
    }
};

// 使用迭代器遍历
// class Solution
// {
// public:
//     string pathEncryption(string path)
//     {
//         for (auto it = path.begin(); it < path.end(); ++it)
//         {
//             if (*it == '.')
//             {
//                 *it = ' ';
//             }
//         }
//         return path;
//     }
// };

// 使用下标访问
// class Solution
// {
// public:
//     string pathEncryption(string path)
//     {
//         int len = path.size();
//         for (int i = 0; i < len; i++)
//         {
//             if (path[i] == '.')
//             {
//                 path[i] = ' ';
//             }
//         }
//         return path;
//     }
// };

int main()
{
    string path = "a.aef.qerf.bb";

    Solution solution;
    cout << solution.pathEncryption(path) << endl;

    return 0;
}