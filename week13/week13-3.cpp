//week13-3.cpp 學習計畫 Linked list 第2題
//LeetCode 2. Add Two Numbers 把鏈結串列 Linked list 裡面的數、小心進位
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999); // 故意放999 代表奇怪的值
        ListNode* ans2 = ans; //會滑動的指標, 把 ans 後面的 Linked List 逐一處理好
        int carry = 0; // 一開始,還沒有進位的值,放0
        while ( l1 != nullptr || l2 != nullptr ){ // 只要有1個不是空指標!
            int now = carry;
            if(l1 != nullptr ){ // 處理左邊的list1
                now += l1->val; //把值加進去
                l1 = l1->next; // 換一下筆
            }
            if(l2 != nullptr){ // 處理左邊的list2
                now += l2->val; //把值加進去
                l2 = l2->next; // 換一下筆
            }
            ans2->next = new ListNode(now % 10); // 慢慢 接好 後面的答案
            ans2 = ans2->next; //繼續往後(待命接好)
            carry = now / 10;
        }
        if(carry>0){ //還有進位? 要再多準備一位,給最高進位的
            ans2->next = new ListNode(carry);
        }
        return ans->next;
    }
};
