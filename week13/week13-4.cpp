// week13-4.cpp 聖誕節程式 Advant of Code 2025
// 第1題.......Day1: : Secret Entrance..... 神秘的入口
// 我們利用LeetCode 有個功能 My Playground 我的遊戲場 可以寫程式 (右下角放stdin輸入)
// LeetCode 會為我們 #include 全部的東西, 所以前面甚麼都不用寫

int main() {
    char c; //每一行, 有一個英文
    int d; // 有一個數學
    int now = 50; //現在的刻度是在50
    int ans =0; //刻度「只到第幾」」
    while(cin >> c >> d){
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";

        if(c=='L') now -= d; // 往左走, 剪掉他
        if(c=='R') now += d; // 往右走, 加上他

        now = (now % 100 + 100) % 100; // 取餘數 + 100 再取餘數, 得到 0-99間
        if(now==0) ans++; // 刻度有「只到幾次0」
        //cout << "現在到達格子刻度" << now << "\n";
    }
    cout << "答案是:" << ans;
}
//先打題目的Input 貼到右下角
//L68
//L30
//R48
//L5
//R60
//L55
//L1
//L99
//R14
//L82
