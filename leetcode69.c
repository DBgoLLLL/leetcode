// 求x的平方根
// https://leetcode.cn/problems/sqrtx/solution/x-de-ping-fang-gen-by-leetcode-solution/
// 解法一：二分法 空间复杂度是O(1)，时间复杂度是O(log n)
int mySqrt(int x){
    if (x==0)
    {
        return 0;
    }
    if (x<4)
    {
        return 1;
    }
    for (int item=1; item<=x/2; item++)
    {
        if (item<=x/item && (item+1)>x/(item+1))
        {
            return item;
        }
    }
    return 0;
}
// 解法二：袖珍计算器发 空间时间复杂度都是O(1)
// 将平方根换底
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        int ans = exp(0.5 * log(x));
        return ((long long)(ans + 1) * (ans + 1) <= x ? ans + 1 : ans);
    }
};
// 使用了exp内置函数 x = e的lnx方
// e的x方是exp函数
// log(x) 是以e为底
// 解法三：
