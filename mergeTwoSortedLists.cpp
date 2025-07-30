// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode temp(0);
    ListNode* list3 = &temp;
    int num = 0;
    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val <= list2->val)
        {
            num = list1->val;
            list1 = list1->next;
        }
        else
        {
            num = list2->val;
            list2 = list2->next;
        }
        list3->next = new ListNode(num);
        list3 = list3->next;
    }
    if (list1 != nullptr)
        list3->next = list1;
    if (list2 != nullptr)
        list3->next = list2;
    return temp.next;
}