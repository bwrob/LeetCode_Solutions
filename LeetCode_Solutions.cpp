#include <iostream>
#include <vector>
#include "Solution_217.h"


using namespace std;


int main()
{
    cout << "217. Contains Duplicate";
    auto solution = Solution_217();
    vector<int> test_vector{1,2,3,4,4,5,99};
    auto contains_duplicate = solution.containsDuplicate3(test_vector);
    cout << contains_duplicate;


    cout << "242. Valid Anagram";

    return 0;
}
