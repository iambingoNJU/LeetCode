
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
	vector<vector<int>> iv1 = { { 1, 2, 3, 4 },
							   { 5, 1, 2, 3 },
							   { 9, 5, 1, 2 } };
	REQUIRE( s.isToeplitzMatrix(iv1) );

	vector<vector<int>> iv2 = { { 1, 2 }, { 2, 2 } };
	REQUIRE( !s.isToeplitzMatrix(iv2) );
}
