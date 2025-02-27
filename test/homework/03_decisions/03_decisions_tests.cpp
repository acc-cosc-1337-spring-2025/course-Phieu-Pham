#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get letter grade using if"){
	REQUIRE(get_letter_grade_using_if(93) == "A");
	REQUIRE(get_letter_grade_using_if(83) == "B");
	REQUIRE(get_letter_grade_using_if(70) == "C");
	REQUIRE(get_letter_grade_using_if(69) == "D");
	REQUIRE(get_letter_grade_using_if(59) == "F");
}

TEST_CASE("Test get letter grade using switch"){
	REQUIRE(get_letter_grade_using_switch(93) == "A");
	REQUIRE(get_letter_grade_using_switch(83) == "B");
	REQUIRE(get_letter_grade_using_switch(70) == "C");
	REQUIRE(get_letter_grade_using_switch(69) == "D");
	REQUIRE(get_letter_grade_using_switch(59) == "F");
}