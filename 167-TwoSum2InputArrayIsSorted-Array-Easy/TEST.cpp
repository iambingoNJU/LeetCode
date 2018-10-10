
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

	vector<int> iv1 = { 2, 7, 11, 15 };
	vector<int> iv1_expected = { 1, 2 };
	REQUIRE( s.twoSum(iv1, 9) == iv1_expected );

	vector<int> iv2 = { 3, 24, 50, 79, 88, 150, 345 };
	vector<int> iv2_expected = { 3, 6 };
	REQUIRE( s.twoSum(iv2, 200) == iv2_expected );
}
