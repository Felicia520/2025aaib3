//week13-2a.cpp 學習計畫 Limk list
// Leetcode 21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = ListNode(); //錯誤的寫法
        ListNode* ans = new ListNode(999); // 正確的寫法 要有個 new 給指標
        ListNode* now = ans;
        while (list1 != nullptr && list2 != nullptr){ // 兩邊都不是空的,才能比大小啊!!! 有東西可以家的話
            if (list1->val <= list2->val){ //比大小 左邊小, 放左邊
                now->next = list1; // 左邊小, 放到答案裡
                list1 = list1->next;
                now = now->next;
            } else {//右邊小,放右邊list2
                now->next = list2;
                list2 = list2->next; //用完了, 換下一章
                now = now->next; //分身 要處理下一筆
            }
        }
        // 收尾啦!!
        if (list1 != nullptr) now->next = list1; //收尾啦!!
        if (list2 != nullptr) now->next = list2; //收尾啦!!
        return ans->next;
    }
};
