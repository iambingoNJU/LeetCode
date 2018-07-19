
#include "../catch/catch.hpp"
#include "solution.cpp"

// Using [catch] to test your code
// For more details, go https://github.com/catchorg/Catch2/blob/master/docs/test-cases-and-sections.md#top

bool vec_equal(const vector<vector<int>>& v1, const vector<vector<int>>& v2) {
	if (v1.size() != v2.size()) return false;
	for (int i = 0; i < v1.size(); i++) {
		if(v1[i].size() != v2[i].size()) return false;
		for (int j = 0; j < v1[i].size(); j++) {
			if (v1[i][j] != v2[i][j]) return false;
		}
	}
	return true;
}

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
	vector<vector<int>> v1 = { {1, 1, 0}, {1, 0, 1}, {0, 0, 0} };
	vector<vector<int>> v1_expected = { {1, 0, 0}, {0, 1, 0}, {1, 1, 1} };
	REQUIRE( vec_equal(s.flipAndInvertImage(v1), v1_expected) );

	vector<vector<int>> v2 = { {1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, { 1, 0, 1, 0} };
	vector<vector<int>> v2_expected = { {1, 1, 0, 0}, {0, 1, 1, 0}, {0, 0, 0, 1}, {1, 0, 1, 0} };
	REQUIRE( vec_equal(s.flipAndInvertImage(v2), v2_expected) );
}
