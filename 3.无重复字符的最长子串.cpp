/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//解法1：滑动窗口


 int start(0), end(0), length(0), result(0);
        int sSize = int(s.size());
        while (end < sSize)
        {
            char tmpChar = s[end];
            for (int index = start; index < end; index++)
            {
                if (tmpChar == s[index])
                {
                    start = index + 1;
                    length = end - start;
                    break;
                }
            }

            end++;
            length++;
            result = max(result, length);
        }
        return result;
    


    // int start=0;
    // int end,result=0;
    // int length=0;
    // while (end<s.size())
    // {
    //     for (int i = start; i < end; i++)
    //     {
    //         if (s[i]==s[end])
    //         {
    //             start=i+1;
    //             length=end-start;
    //             /* code */
    //             break;
    //         }
    //         /* code */
    //     }
    //     end++;
    //     length++;
    //     result=max(result,length);
        
    //     /* code */
    // }
    
    // return result;

    

        
        

    }
};
// @lc code=end

