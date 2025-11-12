 ///Leetcode學習計畫 大海撈針 在haystack 找到 needle
///28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///要用迴圈, 把所有可能位置, 都找過一次
        ///ex.  sadbutsad 很難過 要找sad
        ///     sad
        /// i:1 sad
        ///     abd
        /// i:2  sad ...
        ///      dbu
        int H = haystack.length(), N = needle.length();
        for(int i = 0; i <= H - N; i++){
            if( haystack.substr(i, N) == needle) return i;
            ///從 i 開始, 剪出 N個字母 「竟然相同」 找到答案!!!
        }
        return -1; /// 沒有找到答案, 要回傳 -1 代表失敗
    }
};
