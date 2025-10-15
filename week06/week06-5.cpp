///week06-5.cpp
///LeetCode 3350. Adjacent Increasing Subarrays Detection II
///木和昨天的3349很像，昨天給你的k今天問你「最大可能的k」
///3349用 combo ,今天3350用兩個combo左到右、右到左，累積多少
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size(); ///陣列的大小
        vector<int> left(N, 1); ///左到右的combo
        vector<int> right(N, 1); ///右到左的combo
        for(int i=1; i<N; i++){ ///左到右的combo 逐一更新
            if(nums[i-1] < nums[i]) left[i] = left[i-1] + 1;
        }
        for(int i=N-2; i>=0; i--){ ///左到右的combo 逐一更新
            if(nums[i] < nums[i+1]) right[i] = right[i+1] + 1;
        }
        int ans = 0; /// 要找到最大的k, 也就是「兩個相鄰陣列」,要持續增加的最長長度k
        for(int i=0; i<N-1; i++){
            int now = min(left[i], right[i+1]); /// 現在這格左邊combo 右邊combo 都府和
            if(now>ans) ans = now; /// 有更大的k,就用來更新ans
        }
        return ans;
    }
