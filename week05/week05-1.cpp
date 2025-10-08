///week05-1.cpp
///Leetcode 學習計畫 Built-In Fuctions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// 把字串 string 當 iostream 的cin來用
        string word; /// 字串
        ///ss >> word; // 像是 cin >> word 依樣, 現在的 ss 可以用 ss >>word
        ///ss >> word
        while(ss >> word){ /// 一直讀,獨到不能讀為止
            ///裡面甚麼都沒有做
        }
        cout << word; /// 先做一個實驗,看獨到哪個

        return word.length(); ///隨便寫答案
    }
};
