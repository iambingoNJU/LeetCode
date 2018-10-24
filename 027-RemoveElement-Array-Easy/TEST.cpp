
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
	vector<int> v1 = { 3, 2, 2, 3 };
	int n1 = s.removeElement(v1, 3);
	REQUIRE( n1 == 2 );
	for (int i = 0; i < n1; i ++) {
		REQUIRE( v1[i] != 3 );
	}

	vector<int> v2 = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int n2 = s.removeElement(v2, 2);
	REQUIRE( n2 == 5 );
	for (int i = 0; i < n2; i ++) {
		REQUIRE( v2[i] != 2 );
	}
}
