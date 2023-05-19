#pragma once

// Given an integer array nums, return true if any value appears at least twice in the array, 
// and return false if every element is distinct.

#include "Solution_217.h"
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool Solution_217::containsDuplicate(vector<int>& nums) {
    unordered_set<int> num_set;
    for (auto& number : nums)
    {
        auto it = num_set.find(number);
        if (it == num_set.end())
            num_set.insert(number);
        else
            return true;
    }
    return false;
}

bool Solution_217::containsDuplicate2(vector<int>& nums) {
    unordered_set<int> num_set(make_move_iterator(nums.begin()), make_move_iterator(nums.end()));
    return !(nums.size() == num_set.size());
}

bool Solution_217::containsDuplicate3(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (auto it = nums.begin(); it != (--nums.end()); ++it)
    {
        if ( *it == *(next(it)) )
            return true;
    }
    return false;
}