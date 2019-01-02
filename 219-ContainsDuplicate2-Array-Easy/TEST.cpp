
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
	vector<int> v1 = { 1, 2, 3, 1 };
	REQUIRE( s.containsNearbyDuplicate(v1, 3) );

	vector<int> v2 = { 1, 0, 1, 1 };
	REQUIRE( s.containsNearbyDuplicate(v2, 1) );

	vector<int> v3 = { 1, 2, 3, 1, 2, 3 };
	REQUIRE( !s.containsNearbyDuplicate(v3, 2) );
}
