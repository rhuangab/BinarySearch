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
bool binary_search_leftmost_predicate(int current_value, int target) {
    return current_value < target;
}

int binary_search_leftmost(vector<int> &input, int target) {
    int left = 0;
    int right = input.size() - 1;
    while (left < right) {
        int middle = (left + right) / 2;
        if (binary_search_leftmost_predicate(input[middle], target)) {
            left = middle + 1;
        } else {
            right = middle;
        }
    }
    return left;
}

// Implement the binary search algorithm.
// Given a sorted vector, return the index of the LAST target from left.
// The vector can contain duplicates.
// Example :
// Input [1,2,2,4,4]
// Target: 1 -> Index: 0
// Target: 2 -> Index: 2
// Target: 4 -> Index: 4
bool binary_search_rightmost_predicate(int current_value, int target) {
    return current_value <= target;
}

int binary_search_rightmost(vector<int> &input, int target) {
    int left = 0;
    int right = input.size() - 1;
    while (left < right) {
        int middle = (left + right + 1) / 2;
        if (binary_search_rightmost_predicate(input[middle], target)) {
            left = middle;
        } else {
            right = middle - 1;
        }
    }
    return left;
}

TEST_CASE("binary_search_leftmost: Find first match") {
    // Case 1.
    // Simple
    vector<int> input = {1, 1};
    REQUIRE(binary_search_leftmost(input, 1) == 0);

    // Case 2.
    // Simple, no duplicates.
    input = {1, 2};
    REQUIRE(binary_search_leftmost(input, 1) == 0);
    REQUIRE(binary_search_leftmost(input, 2) == 1);

    // Case 3.
    // Simple, no duplicates.
    input = {1, 2, 3, 4, 5};
    REQUIRE(binary_search_leftmost(input, 1) == 0);
    REQUIRE(binary_search_leftmost(input, 2) == 1);
    REQUIRE(binary_search_leftmost(input, 3) == 2);
    REQUIRE(binary_search_leftmost(input, 4) == 3);
    REQUIRE(binary_search_leftmost(input, 5) == 4);

    // Case 4.
    // Contains duplicates.
    input = {1, 1, 2, 2, 2, 4, 4};
    REQUIRE(binary_search_leftmost(input, 1) == 0);
    REQUIRE(binary_search_leftmost(input, 2) == 2);
    REQUIRE(binary_search_leftmost(input, 4) == 5);
}

TEST_CASE("binary_search_rightmost: Find first match") {
    // Case 1.
    // Simple
    vector<int> input = {1, 1};
    REQUIRE(binary_search_rightmost(input, 1) == 1);

    // Case 2.
    // Simple, no duplicates.
    input = {1, 2};
    REQUIRE(binary_search_rightmost(input, 1) == 0);
    REQUIRE(binary_search_rightmost(input, 2) == 1);

    // Case 3.
    // Simple, no duplicates.
    input = {1, 2, 3, 4, 5};
    REQUIRE(binary_search_rightmost(input, 1) == 0);
    REQUIRE(binary_search_rightmost(input, 2) == 1);
    REQUIRE(binary_search_rightmost(input, 3) == 2);
    REQUIRE(binary_search_rightmost(input, 4) == 3);
    REQUIRE(binary_search_rightmost(input, 5) == 4);

    // Case 4.
    // Contains duplicates.
    input = {1, 1, 2, 2, 2, 4, 4};
    REQUIRE(binary_search_rightmost(input, 1) == 1);
    REQUIRE(binary_search_rightmost(input, 2) == 4);
    REQUIRE(binary_search_rightmost(input, 4) == 6);
}