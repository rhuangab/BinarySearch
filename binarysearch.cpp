#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <vector>

using namespace std;

// Implement the binary search algorithm.
// Given a sorted vector, return the index of the FIRST target from left.
// The vector can contain duplicates.
// Example :
// Input [1,2,2,4,4]
// Target: 1 -> Index: 0
// Target: 2 -> Index: 1
// Target: 4 -> Index: 3
int binary_search_leftmost(vector<int> &input, int target) {
    // TODO: Implement this function.
    return 0;
}

// Implement the binary search algorithm.
// Given a sorted vector, return the index of the LAST target from left.
// The vector can contain duplicates.
// Example :
// Input [1,2,2,4,4]
// Target: 1 -> Index: 0
// Target: 2 -> Index: 2
// Target: 4 -> Index: 4
int binary_search_rightmost(vector<int> &input, int target) {
    // TODO: Implement this function.
    return 0;
}

TEST_CASE("binary_search_leftmost: Find first match") {
    // Case 1.
    // Simple
    vector<int> input = {1,1};
    REQUIRE(binary_search_leftmost(input, 1) == 0 );

    // Case 2.
    // Simple, no duplicates.
    input = {1,2};
    REQUIRE(binary_search_leftmost(input, 1) == 0 );
    REQUIRE(binary_search_leftmost(input, 2) == 1 );

    // Case 3.
    // Simple, no duplicates.
    input = {1,2,3,4,5};
    REQUIRE(binary_search_leftmost(input, 1) == 0 );
    REQUIRE(binary_search_leftmost(input, 2) == 1 );
    REQUIRE(binary_search_leftmost(input, 3) == 2 );
    REQUIRE(binary_search_leftmost(input, 4) == 3 );
    REQUIRE(binary_search_leftmost(input, 5) == 4 );

    // Case 4.
    // Contains duplicates.
    input = {1,1,2,2,2,4,4};
    REQUIRE(binary_search_leftmost(input, 1) == 0 );
    REQUIRE(binary_search_leftmost(input, 2) == 2 );
    REQUIRE(binary_search_leftmost(input, 4) == 5 );
}

TEST_CASE("binary_search_rightmost: Find first match") {
    // Case 1.
    // Simple
    vector<int> input = {1,1};
    REQUIRE(binary_search_rightmost(input, 1) == 0 );

    // Case 2.
    // Simple, no duplicates.
    input = {1,2};
    REQUIRE(binary_search_rightmost(input, 1) == 0 );
    REQUIRE(binary_search_rightmost(input, 2) == 1 );

    // Case 3.
    // Simple, no duplicates.
    input = {1,2,3,4,5};
    REQUIRE(binary_search_rightmost(input, 1) == 0 );
    REQUIRE(binary_search_rightmost(input, 2) == 1 );
    REQUIRE(binary_search_rightmost(input, 3) == 2 );
    REQUIRE(binary_search_rightmost(input, 4) == 3 );
    REQUIRE(binary_search_rightmost(input, 5) == 4 );

    // Case 4.
    // Contains duplicates.
    input = {1,1,2,2,2,4,4};
    REQUIRE(binary_search_rightmost(input, 1) == 1 );
    REQUIRE(binary_search_rightmost(input, 2) == 4 );
    REQUIRE(binary_search_rightmost(input, 4) == 6 );
}