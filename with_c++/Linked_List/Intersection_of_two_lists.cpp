struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{

    ListNode *ptr1 = headA;
    ListNode *ptr2 = headB;

    int cnt1 = 0, cnt2 = 0;

    while (true)
    {
        if (ptr1 == ptr2)
            return ptr1;

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        if (ptr1 == NULL)
        {
            cnt1++;
            ptr1 = headB;
        }

        if (ptr2 == NULL)
        {
            cnt2++;
            ptr2 = headA;
        }

        if (cnt1 == 2 || cnt2 == 2)
        {
            break;
        }
    }
    return NULL;
}