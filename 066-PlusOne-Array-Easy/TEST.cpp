
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
	vector<int> v1 = { 1, 2, 3 };
	vector<int> v1_expected = { 1, 2, 4 };
	REQUIRE( s.plusOne(v1) == v1_expected );

	vector<int> v2 = { 4, 3, 2, 1 };
	vector<int> v2_expected = { 4, 3, 2, 2 };
	REQUIRE( s.plusOne(v2) == v2_expected );
}
