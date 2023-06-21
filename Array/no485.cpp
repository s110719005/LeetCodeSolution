#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) 
{
    int currentCount = 0;
    int maxCount = 0;
    int previousNum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        int currentNum = nums[i];
        // * solution 1
        // * check if 1 and compare with previous
        if(currentNum == 1 && currentNum != previousNum)
        {
            currentCount = 1;
            if(currentCount > maxCount) { maxCount = currentCount; }
        }
        else if(currentNum == 1 && currentNum == previousNum)
        {
            currentCount ++;
            if(currentCount > maxCount) { maxCount = currentCount; }
        }
        // * solution 2
        // * check if first then compare with previous
        // if(i == 0)
        // {
        //     if(currentNum == 1)
        //     {
        //         currentCount = 1;
        //         if(currentCount > maxCount) { maxCount = currentCount; }
        //     }
        // }
        // else
        // {
        //     if(currentNum == 1 && currentNum == previousNum)
        //     {
        //         currentCount ++;
        //         if(currentCount > maxCount) { maxCount = currentCount; }
        //     }
        //     else if(currentNum == 1 && currentNum != previousNum)
        //     {
        //         currentCount = 1;
        //         if(currentCount > maxCount) { maxCount = currentCount; }
        //     }
        // }
        previousNum = nums[i];
    }
    return maxCount;
}


int main() 
{
    vector<int> nums = {1,1,0,1,1,1};
    vector<int> nums2 = {1,0,1,1,0,1};
    vector<int> nums3 = {0};
    cout << findMaxConsecutiveOnes(nums2);
    return 0;
}