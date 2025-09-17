///week02-4.cpp Leeetcode學習計畫第二題
///389. Find the Difference 找不到2個字串「差哪個字母」
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; /// 可以用桶子來裝字母, 大括號, 代表「一開始空的」
        for(int i=0; i<s.length(); i++){ /// 字串的for迴圈
            char c = s[i]; ///取出字串
            A[c]++; ///把字母,放入桶子裡
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i]; ///取出字母
            A[c]--; ///從桶子裡,拿出字母
            if(A[c]<0) return c; /// 拿光光, 變負的, 代表不夠用,缺他
        }
        return 0; /// 不會用到這一行拉
    }
};
