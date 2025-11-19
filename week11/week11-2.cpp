///week11-2.cpp 學習計畫 Math 地2題
/// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        ///int total = 0;
        double total = 0; ///要有小數點
        int M = salary[0], m = salary[0];
        for(int i=0; i<salary.size(); i++){
            total += salary[i];
            if(salary[i] > M) M = salary[i]; ///更大的
            if(salary[i] < m) m = salary[i]; ///更小的
        }
        return (total -M -m) / (salary.size()-2);
    }
};
