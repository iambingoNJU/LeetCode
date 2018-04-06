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
	// Edit your solution code here
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
};

