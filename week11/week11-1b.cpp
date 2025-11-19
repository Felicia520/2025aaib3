// week11-1b.cpp
//LeetCode 2154. Keep Multiplying Found Values by Two
// 每次乘2倍,把沒出現的數字 return 吃來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for(int num : nums) numsSet.insert(num);
        while(numsSet.find(original) != numsSet.end()){
            original = original * 2;
        }
        return original;
    }
};
