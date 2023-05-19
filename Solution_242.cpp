#pragma once

// Given two strings sand t, return true if t is an anagram of s, and false otherwise.

#include "Solution_242.h"

bool Solution_242::isAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

bool Solution_242::isAnagram2(string s, string t) {
    if (s.size() != t.size())
        return false;
    int temp[26] = {};
    for (auto c : s)
        temp[c - 'a']++;
    for (auto c : t)
        temp[c - 'a']--;
    for (auto i : temp)
    {
        if (i != 0)
            return false;
    }
    return true;
}
