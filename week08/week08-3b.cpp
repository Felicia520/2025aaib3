///week08-3b.cpp LeetCode 學習計畫
///1275. Find Winner on a Tic Tac Toe Game
/// 看起來 3x3 陣列 , 所以開 int a[3][3] ={} 陣列 再用myPrint() 印出來
class Solution {
public:
    /// myPrint() 小幫手的城市刪掉瞜
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; /// 有人括號,會給0
        int now = 1; /// 1 : 玩家A 第1個玩家 2: 玩家B 第2個玩家
        int winner = 0;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now;///a[i][j] = 1; ///玩家A 第1個玩家
            ///myPrint(a); /// 把陣列印出來喔!!! 我們的小幫手
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now; ///
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now; ///那一條直線
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now; ///斜線左上 右下
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now; ///斜線右上 左下
            if(now==1) now = 2; ///A下完後,將換B下
            else now = 1; /// B下完後，將換下A
        }
        if(winner==1) return "A"; /// 先隨便 return 啦!
        else if(winner==2) return "B"; ///有 winner 是 2
        else if(moves.size()==9) return "Draw"; ///「走完9步，裁示平手」
        else return "Pending"; ///陷阱,還沒下完，要等Pending
    }
};
