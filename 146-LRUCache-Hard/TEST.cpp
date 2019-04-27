
#include "../catch/catch.hpp"
#include "solution.cpp"

// Using [catch] to test your code
// For more details, go https://github.com/catchorg/Catch2/blob/master/docs/test-cases-and-sections.md#top

// Set test name and tags here
TEST_CASE("Test name", "[Tag1][Tag2]...")
{
	LRUCache cache( 2 /* capacity */ );

	cache.put(1, 1);
	cache.put(2, 2);
	REQUIRE( cache.get(1) == 1 );			// returns 1
	cache.put(3, 3);						// evicts key 2
	REQUIRE( cache.get(2) == -1 );			// returns -1 (not found)
	cache.put(4, 4);						// evicts key 1
	REQUIRE( cache.get(1) == -1 );			// returns -1 (not found)
	REQUIRE( cache.get(3) == 3 );			// returns 3
	REQUIRE( cache.get(4) == 4 );			// returns 4
}
