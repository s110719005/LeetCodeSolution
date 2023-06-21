#include <iostream>
using namespace std;
/* 
? You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, 
? due to some error, one of the numbers in s got duplicated to another number in the set, 
? which results in repetition of one number and loss of another number.
? You are given an integer array nums representing the data status of this set after the error.
? Find the number that occurs twice and the number that is missing and return them in the form of an array.
*/ 
vector<int> findErrorNums(vector<int>& nums) 
{
    vector<int> result;
    vector<int> duplicatesCheck;
    int previousNum = 0;
    int currentNum = 0;
    int missingNum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(!(find(nums.begin(), nums.end(), (i+1)) != nums.end())) 
        {
            missingNum = (i+1);
        }


        currentNum = nums[i];
        if(find(duplicatesCheck.begin(), duplicatesCheck.end(), (currentNum)) != duplicatesCheck.end())
        {
            result.push_back(currentNum);
        }
        else
        {
            duplicatesCheck.push_back(currentNum);
        }
        previousNum = nums[i];
    } 
    result.push_back(missingNum);
    cout << result[0] << "," << result[1];
    return result;
}
int main()
{
    vector<int> nums = {1,2,2,4}; //d:2 missing 3
    vector<int> nums2 = {1,1};// d:1 missing 2
    vector<int> nums3 = {1,2,3,4,5,5,7};// d:5 missing 6
    vector<int> nums4 = {6,6,1,4,3,2,7};// d: 6 missing 5
    vector<int> nums5 = {2,3,2};// d: 2 missing 1
    findErrorNums(nums5);
    return 0;
}