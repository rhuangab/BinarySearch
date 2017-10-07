#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <vector>

using namespace std;

// Implement the binary search algorithm.
// Given a sorted vector, return the index of the first target from left.
// The vector can contain duplicates.
// Example :
// Input [1,2,2,4,5]
// Target: 1 -> Index: 0
// Target: 2 -> Index: 1
// Target: 4 -> Index: 3
// Target: 5 -> Index: 4
int binary_search(vector<int> &input, int target) {
    // 实现这个方程。
    return 0;
}


TEST_CASE("BinarySearch: Find first match") {
    vector<int> input = {1,2,2,4,5};
    REQUIRE( binary_search(input, 1) == 0 );
    REQUIRE( binary_search(input, 2) == 1 );
    REQUIRE( binary_search(input, 4) == 3 );
    REQUIRE( binary_search(input, 5) == 4 );
}