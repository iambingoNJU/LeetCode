
#include "../catch/catch.hpp"
#include "solution.cpp"

// Using [catch] to test your code
// For more details, go https://github.com/catchorg/Catch2/blob/master/docs/test-cases-and-sections.md#top

// Set test name and tags here
TEST_CASE("Test name", "[Tag1][Tag2]...")
{
    Solution s;

	//
	// example:
    // std::vector<int> v1{2, 7, 11, 15};
    // REQUIRE( (s.twoSum(v1, 9) == std::vector<int>{0, 1}) );
	//
	// Edit your test code here
	ListNode *l1 = new ListNode(2), *tail;
	tail = l1;
	tail->next = new ListNode(4);
	tail = tail->next;
	tail->next = new ListNode(3);

	ListNode *l2 = new ListNode(5);
	tail = l2;
	tail->next = new ListNode(6);
	tail = tail->next;
	tail->next = new ListNode(4);

	ListNode *result = s.addTwoNumbers(l1, l2);

	REQUIRE( (result->val == 7) );
	REQUIRE( (result->next->val == 0) );
	REQUIRE( (result->next->next->val == 8) );

}
