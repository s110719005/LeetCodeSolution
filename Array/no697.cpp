#include <iostream>
#include <map>
using namespace std;

//? Given a non-empty array of non-negative integers nums, 
//? the degree of this array is defined as the maximum frequency of any one of its elements.
//? Your task is to find the smallest possible length of a (contiguous) subarray of nums, 
//? that has the same degree as nums.

/*
Input: nums = [1,2,2,3,1,4,2]
Output: 6
Explanation: 
The degree is 3 because the element 2 is repeated 3 times.
So [2,2,3,1,4,2] is the shortest subarray, therefore returning 6.
*/


int findShortestSubArray(vector<int>& nums) 
{
    map<int, int> numCountMap;
    for(int i = 0; i < nums.size(); i++)
    {
        auto result = numCountMap.find(nums[i]);
        if(result == numCountMap.end())
        {
            numCountMap.insert(nums[i], 1);
        }
        else
        {
            result->second += 1; 
        }
    }
    vector<int> max;
    // for(int i = 0; i < numCountMap.size() - 1; i++)
    // {
    //     vector<int> max;
    //     if(numCountMap[i] > numCountMap[i+1])
    //     {
    //         max.clear();
    //         max.insert(numCountMap[i]);
    //     }
    // }
    return 0;
}

int main()
{
    
    return 0;
}