
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
	std::vector<string> v1 = { "2", "1", "+", "3", "*" };
	REQUIRE( s.evalRPN(v1) == 9 );

	std::vector<string> v2 = { "4", "13", "5", "/", "+" };
	REQUIRE( s.evalRPN(v2) == 6 );

	std::vector<string> v3 = { "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+" };
	REQUIRE( s.evalRPN(v3) == 22 );
}
