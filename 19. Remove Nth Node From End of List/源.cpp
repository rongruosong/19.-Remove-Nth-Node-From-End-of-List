#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode*  dummy = new ListNode(0);
	dummy->next = head;
	ListNode* l1 = dummy;
	ListNode* l2 = dummy;
	for (int i = 0; i < n; i++)
	{
		l2 = l2->next;
	}
	while (l2->next != NULL)
	{
		l1 = l1->next;
		l2 = l2->next;
	}
	l1->next = l1->next->next;
	return dummy->next;

}