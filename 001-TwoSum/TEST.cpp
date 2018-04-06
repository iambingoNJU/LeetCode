#define CATCH_CONFIG_MAIN
#include "../catch/catch.hpp"
#include "solution.cpp"

TEST_CASE("Two Sum", "twoSum")
{
    Solution s;

    std::vector<int> v1{2, 7, 11, 15};
    REQUIRE( (s.twoSum(v1, 9) == std::vector<int>{0, 1} 
		|| s.twoSum(v1, 9) == std::vector<int>{1, 0} ) );

    std::vector<int> v2{0, 4, 3, 0};
    REQUIRE( (s.twoSum(v2, 0) == std::vector<int>{0, 3}
		|| s.twoSum(v2, 0) == std::vector<int>{3, 0} ) );

    std::vector<int> v3{-3, 4, 3, 90};
    REQUIRE( (s.twoSum(v3, 0) == std::vector<int>{0, 2}
		|| s.twoSum(v3, 0) == std::vector<int>{2, 0} ) );
}
