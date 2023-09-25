// 344.反转字符串
// https://leetcode.cn/problems/reverse-string/
// 参考: 代码随想录

#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

void swap(char &ch1, char &ch2)
{
    char tmp = ch1;
    ch1 = ch2;
    ch2 = tmp;
}

// 双指针法
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i <= j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};

    Solution solution;
    solution.reverseString(s);
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    Solution solution2;
    solution2.reverseString(s2);
    for (auto it = s2.begin(); it != s2.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}