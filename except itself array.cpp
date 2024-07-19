#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int zero_count = 0;
        int product = 1;

        // Calculate the product of all non-zero elements and count zeros
        for (int num : nums) {
            if (num == 0) {
                zero_count++;
            } else {
                product *= num;
            }
        }

        // If more than one zero, all elements in result are zero
        if (zero_count > 1) {
            return result;
        }

        // Fill the result array
        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                result[i] = product;  // Only one zero in nums, this position should have the product of all non-zero elements
            } else {
                result[i] = zero_count == 0 ? product / nums[i] : 0;  // If no zero, normal product; if one zero, result should be zero
            }
        }

        return result;
    }
};

int main() {
    solution sol;
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> result = sol.productExceptSelf(nums);

    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

