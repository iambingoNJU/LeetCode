#include <vector>
#include <algorithm>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	// version 1
	/*
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *head = NULL, *tail = NULL;
		int carry = 0;
		while (l1 != NULL && l2 != NULL) {
			int sum = l1->val + l2->val + carry;
			carry = (sum >= 10);

			if (head == NULL) {
				head = new ListNode(sum % 10);
				tail = head;
			} else {
				tail->next = new ListNode(sum % 10);
				tail = tail->next;
			}

			l1 = l1->next;
			l2 = l2->next;
		}

		l1 = l1 == NULL ? l2 : l1;
		
		while (l1 != NULL) {
			int sum = l1->val + carry;
			carry = (sum >= 10);
			tail->next = new ListNode(sum % 10);
			tail = tail->next;
			l1 = l1->next;
		}

		if (carry == 1)
			tail->next = new ListNode(1);

		return head;
    }
	*/

	// version 2, more elegant
	/*
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode prehead(0), *p = &prehead;
		while ((prehead.val /= 10) || l1 || l2) {
			if (l1) { prehead.val += l1->val; l1 = l1->next; }
			if (l2) { prehead.val += l2->val; l2 = l2->next; }
			p = p->next = new ListNode(prehead.val % 10);
		}
		return prehead.next;
	}
	*/

	// version 3, recursive version
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		static int carry = 0;
		if (!l1 && !l2 && !carry) return NULL;
		carry += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
		ListNode *node = new ListNode(carry % 10);
		carry /= 10;
		node->next = addTwoNumbers(l1 ? l1->next : NULL, l2 ? l2->next : NULL);
		return node;
	}
};

