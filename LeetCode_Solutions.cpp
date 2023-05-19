// LeetCode_Solutions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Solution_217.h"

using namespace std;

int main()
{
    auto solution = Solution_217();
    vector<int> test_vector{ 1,2,3,4,4,5,99};
    auto sum = solution.containsDuplicate3(test_vector);

    cout << sum;

    return 0;
}

