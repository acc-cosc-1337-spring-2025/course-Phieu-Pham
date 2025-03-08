#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("get_gc_content") {
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
}

TEST_CASE("get_reverse_string") {
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
}

TEST_CASE("get_dna_complement") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
}