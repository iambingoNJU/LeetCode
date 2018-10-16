
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
	string s1("abbxxxxzzy");
	vector<vector<int>> v1_expected = { {3, 6} };
	REQUIRE( s.largeGroupPositions(s1) == v1_expected );

	string s2("abc");
	vector<vector<int>> v2_expected = { };
	REQUIRE( s.largeGroupPositions(s2) == v2_expected );

	string s3("abcdddeeeeaabbbcd");
	vector<vector<int>> v3_expected = { {3, 5}, {6, 9}, {12, 14} };
	REQUIRE( s.largeGroupPositions(s3) == v3_expected );
}
