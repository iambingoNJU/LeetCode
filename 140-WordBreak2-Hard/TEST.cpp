
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
	vector<string> wd1 = { "cat", "cats", "and", "sand", "dog" };
	vector<string> r1 = { "cats and dog", "cat sand dog" };
	REQUIRE( s.wordBreak("catsanddog", wd1) == r1 );

	vector<string> wd2 = { "apple", "pen", "applepen", "pine", "pineapple" };
	vector<string> r2 = { "pine apple pen apple", "pineapple pen apple", "pine applepen apple" };
	REQUIRE( s.wordBreak("pineapplepenapple", wd2) == r2 );

	vector<string> wd3 = { "cats", "dog", "sand", "and", "cat" };
	vector<string> r3 = { };
	REQUIRE( s.wordBreak("catsandog", wd3) == r3 );
}
