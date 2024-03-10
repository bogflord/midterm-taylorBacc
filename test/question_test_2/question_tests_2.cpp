#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Testing roll_die function")
{
	for(auto i = 0; i < 10; i++)
	{
		auto roll = roll_die();
		REQUIRE(roll <= 6);
		REQUIRE(roll >= 1);
	}
}