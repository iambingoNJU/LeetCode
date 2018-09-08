
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
	std::vector<int> v1 = { 1, 2, 2, 3 };
	REQUIRE ( s.isMonotonic(v1) );

	std::vector<int> v2 = { 6, 5, 4, 4 };
	REQUIRE ( s.isMonotonic(v2) );

	std::vector<int> v3 = { 1, 3, 2 };
	REQUIRE ( !s.isMonotonic(v3) );

	std::vector<int> v4 = { 1, 2, 4, 5 };
	REQUIRE ( s.isMonotonic(v4) );

	std::vector<int> v5 = { 1, 1, 1 };
	REQUIRE ( s.isMonotonic(v5) );

	std::vector<int> v6 = { 11,11,9,4,3,3,3,1,-1,-1,3,3,3,5,5,5 };
	REQUIRE ( !s.isMonotonic(v6) );
}
