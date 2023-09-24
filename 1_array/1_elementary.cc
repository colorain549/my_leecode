// 数组理论基础
// https://programmercarl.com/%E6%95%B0%E7%BB%84%E7%90%86%E8%AE%BA%E5%9F%BA%E7%A1%80.html
// 参考: 代码随想录

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << &arr[0][0] << " "
         << &arr[0][1] << " "
         << &arr[0][2] << " "
         << endl

         << &arr[1][0] << " "
         << &arr[1][1] << " "
         << &arr[1][2] << " "
         << endl;

    return 0;
}