//week12-3.cpp 學習計畫 Math 第4題
// LeetCode 976. Largest Perimeter Triangle
// 藥用 nums 裡的棒子長度,組合出「三角形」兩維和>第3邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 排序(又快又好)
        //for(int i-nums.size()-1; i>=0; i--){ //用迴圈, 到大小都試一次
            //cout << nums[i] << " ";
        //}
        for(int i=nums.size()-1; i>=2; i--){
            if(nums[i] < nums[i-1] + nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
            //如果順利「兩邊和大於第三邊」 就把我們的周常加起來, 當成答案
        }

        return 0; //找不到任何「合法」的三角形,就return

    }
};
