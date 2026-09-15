class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *temp = head;
        while(temp != nullptr)
        {
            temp = temp->next;
            count++;
        }
        if (n == count)
    {
    head = head->next;
    return head;
    }
        int length = count - n-1;
        int count1 = 0;
        ListNode *temp1 = head;
        ListNode *temp2 = temp1->next;
        while (count1 != length)
        {
            temp2 = temp2->next;
            temp1 = temp1->next;
            count1++;
        }
        temp1->next = temp2->next;
        return head;

    }
};