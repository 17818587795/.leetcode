/*
 * @Description: 
 * @版本: 2.0
 * @作者: jianwen
 * @Date: 2019-10-20 09:38:57
 * @LastEditors: jianwen
 * @LastEditTime: 2019-10-21 10:57:29
 */
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
# include <vector>
using namespace std;
// 暴力匹配法，两个for循环遍历整个数组
// Vector作为函数的参数或者返回值时，&绝对不能少
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  
        int i,j;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                   return vector<int>{i,j};
                }
            }
        }
        return vector<int>{};
    };
};
// @lc code=end

