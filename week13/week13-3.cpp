// week13-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers 把數值中的 Linked List 相加並回傳結果
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {  // 名字是小寫字母 l1 不是數字 1
        ListNode* ans = new ListNode(999);  // 放置值999 代表虛擬的節點
        ListNode* ans2 = ans;  // 會滑動的指標，把 ans 後面的 Linked List 一一處理好
        int carry = 0;  // 開始，這是沒有值的節點，初始0
        while (l1 != nullptr || l2 != nullptr) {  // 只要有一個不是空指標！
            int now = carry;
            if (l1 != nullptr) {  // 處理右邊的 list1
                now += l1->val;  // 把值加進去
                l1 = l1->next;  // 換下一筆
            }
            if (l2 != nullptr) {  // 處理右邊的 list2
                now += l2->val;  // 把值加進去
                l2 = l2->next;  // 換下一筆
            }
            ans2->next = new ListNode(now % 10);  // 慢慢「接好」後面的答案
            ans2 = ans2->next;  // 繼續往後（等待接好）
            carry = now / 10;  // 還有進位？要再準備1位，給最高的進位
        }
        if (carry > 0) {  // 還有進位？ 要再準備1位，給最高的進位
            ans2->next = new ListNode(carry);
        }
        return ans->next;
    }
};

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
