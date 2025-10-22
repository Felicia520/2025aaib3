//week07-3.cpp Leetcode 學習計畫 Simulation 地1題
//682. Baseball Game 計算點數
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; //Part04 : 要把資料放到陣列a裡面
        for (string op : operations){ // Part01: C++ 進階迴圈
            cout << "現在讀到了: " << op << "\n"; //Part02: 看他是誰,等一下刪掉
            //Part03: 一堆 if 判斷要怎麼模擬
            if(op[0]=='C'){ // 清掉最後一位
                a.pop_back(); // 丟掉最後一個
            }else if(op[0]=='D'){ //最後一位「變2倍」再「家道最後面」
                a.push_back(a.back() * 2) ;//成2倍 Part06: back()
            }else if(op[0]=='+'){ //還不知道等一下看
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp + temp2);
                //把最後兩個加起來,再「加到最後面」
            }else{ // 數字的字串瞜，要「調最後面」
                a.push_back( stoi(op)); //Part04: ,push_back
            }
        }
        int ans = 0;
        for(int now : a){ // Part05: C++ 晉級迴圈 要看陣列的值
            ans += now; //cout << now << " "; // Part02: 看他是誰，等一下刪掉喔(看陣列裡的值)
        }
        // 先隨便 return 等一下再寫一遍答案
        return ans;
    }
};
