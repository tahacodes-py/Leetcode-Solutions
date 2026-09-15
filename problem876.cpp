class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr)
        {
            temp = temp->next;
            count++;
        }
        if(count % 2 != 0)
        {
            int y = (count +1)/2;
            ListNode *temp3 = head;
            int count1 = 0;
            while(count1 != y-1)
            {
                temp3 = temp3->next;
                count1++;
            }
            return temp3;
        }
        else 
        {
            int x = (count/2)+1;
            ListNode *temp4 = head;
            int count6 = 0;
            while(count6 != x-1)
            {
                temp4 = temp4->next;
                count6++;
            }
            return temp4;
        }
    }
};