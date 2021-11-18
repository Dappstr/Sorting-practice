/*
* Lane Beals
* 11/18/2021
* Bruteforce search to find two array elements that when added equal a target number.
*
*/

#include <iostream>
#include <vector>

using std::vector; using std::cout;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> arr(2); // Vector to store our two elements

        for (int x = 0; x < std::size(nums); x++)
        {
            for (int y = 0; y < std::size(nums); y++)
            {
                if (nums[y] + nums[x] == target)
                {    
                    //Part of the brute force is checking one element after another for if 'x' element + 'y' element = target, then store them.

                    arr[0] = x;
                    arr[1] = y;
                }

                //Probably redundant, however it's somewhat pleasing to have an assurance to continue the loop if the condition is not met.
                else
                {
                    continue;
                }
            }
        }

        return arr;
    }
};

int main()
{
    vector<int> list = {2, 4, 6, 8};
    int target = 10;

    Solution sol;

    vector<int> solution = sol.twoSum(list, target);

    cout << solution[0] << " " << solution[1];

    return 0;
}