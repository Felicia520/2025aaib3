/// week08-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; // 0:北, 1:東, 2:南, 3:西
        int x = 0, y = 0; //  開始在(0,0)
        instructions = instructions + instructions + instructions + instructions; //重複走四次回到原點
        for(char c : instructions){
            if(c=='G'){ // 往前走
                if(d==0) y++; // 往北走1格
                if(d==1) x++; // 往東走1格
                if(d==2) y--; // 往南走1格
                if(d==3) x--; // 往西走1格
            }else if(c=='R'){ // 往右轉 (順時鐘方向90度)
                d = (d+1) % 4;
            }else if(c=='L'){ //往左轉 (逆時鐘方向90度)
                d = (d+3) % 4;
            }
        }
        return x==0 && y==0; //結束時, 機器人在哪? 什麼叫「繞圈圈」
    }
};
