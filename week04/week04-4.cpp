/// week04-4.cpp
/// LeetCode 學習計畫第10題 896. Monotonic Array
/// 只有增加 or 只有減少 的陣列, 不可以「又增加、又減少」
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0; /// 如果有增加up變成1 如果有減少 down變成1
        for(int i=1; i<nums.size(); i++){ /// 陣列改成從1開始
            if( nums[i-1] < nums[i] ) up = 1; /// 左小、又大,增加
            if( nums[i-1] > nums[i] ) down = 1; /// 左大、右小,減少
        }
        if(up==1 && down==1) return false; /// 最後減少, 不可以「又增加、又減少」
        return true;
    }
};
