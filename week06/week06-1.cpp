///week06-1.cpp
///Leetcode 學習計畫地4提 242. Valid Anagram
///給你2個字串 s, t請判斷他們用的字母,是否都相同(可換順序)
class Solution {
public:
    bool isAnagram(string s, string t) {
        ///先看字串的長度是否相同,不同,就直接失敗
        if(s.length() != t.length()) return false; ///不同,就直接失敗

        ///先把字串 s 的字母,累積一下
        int R[26] = {};///要有一個回收桶,來放我們的字母
        for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a'; ///本來是小寫字母,但要變成0=25考所以要減'a'
            R[c]++;
        }
        ///再把剛剛累積的字母, 看t用到那些、劃掉，剛酐用完(不能用超過)
        for(int i=0; i<t.length();i++){
            char c = t[i] - 'a';
            R[c]--; ///用掉他
            if(R[c]<0) return false; ///不夠用就失敗
        }
        return true;
    }
};
