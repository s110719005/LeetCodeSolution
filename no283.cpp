#include <iostream>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int firstZeroIndex = nums.size();
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(i == firstZeroIndex) 
        { 
            for(int i = 0; i < nums.size(); i++)
            {
                cout << nums[i];
                if(i != nums.size()-1) { cout << ","; }
            }
            return; 
        }
        if(i != firstZeroIndex && nums[i] == 0)
        {
            vector<int>::iterator it = nums.begin();
            nums.erase(it+i);
            nums.push_back(0);
            firstZeroIndex --;
            i--;
        }
    }
    
}
int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    return 0;

}