
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
	std::vector<int> A1 = { 1, 1 }, B1 = { 2, 2 }, C1 = { 1, 2 };
	REQUIRE( s.fairCandySwap(A1, B1) == C1);

	std::vector<int> A2 = { 1, 2 }, B2 = { 2, 3 }, C2 = { 1, 2 };
	REQUIRE( s.fairCandySwap(A2, B2) == C2);

	std::vector<int> A3 = { 2 }, B3 = { 1, 3 }, C3 = { 2, 3 };
	REQUIRE( s.fairCandySwap(A3, B3) == C3);

	std::vector<int> A4 = { 1, 2, 5 }, B4 = { 2, 4 }, C4 = { 5, 4 };
	REQUIRE( s.fairCandySwap(A4, B4) == C4);
}
