/// week07-2.cpp
///657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x =0, y = 0;
        ///for (int i=0; i<moves.length(); i++){ // 傳說的for迴圈
        ///     char c = moves[i];
        for (char c : moves){ ///C++進階迴圈
            if (c=='U'){
                y++;
            }else if (c=='D'){
                y--;
            }else if (c== 'L'){
                x--;
            }else if (c=='R'){
                x++;
            }
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
