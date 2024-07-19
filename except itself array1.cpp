#include<iostream>
#include<vector>
using namespace std; 
class Solution{
	public:
		vector<int> productExceptSelf(vector<int>& nums){
            vector<int> ans;
		    int count=0;
    int answer=1;

    for(int i=0;i<nums.size();i++){

      if(nums[i]==0){

        count++;

      }

        
      else{

        answer=answer*nums[i];

      }

    }

    for(int j=0;j<nums.size();j++){

      if(nums[j]==0){

        count--;

        if(count>0){

          ans.push_back(0);

        }

        else{

          ans.push_back(answer);

        }

        count++;

      }

      else{

        if(count>0){

          ans.push_back(0);

        }

        else{

        ans.push_back(answer/nums[j]);}

        }

    }

    return ans;
		}
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = sol.productExceptSelf(nums);

    for (int value : ans) {
        cout <<value<< " ";
    }
    cout << endl;
}

