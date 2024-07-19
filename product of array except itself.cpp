#include<iostream>
#include<vector>
using namespace std;
/*
class Solution{
	public:
		vector<int> productExceptItself(vector<int>& nums){
			vector<int> result;
			int flag=0;
			int value=1;
			for(int i:nums){
				if(i==0)
				flag++;
				else
				value=value*i;
			}
			if(flag>1){
				for(int i=0;i<nums.size();i++){
					result.push_back(0);
				}
				return result;
			}
			for(int i:nums){
				if(flag==0)
				result.push_back(value/i);
				else if(flag>0 && i!=0)
				result.push_back(0);
				else
				result.push_back(value);
			}
		return result;
		}
};
*/
class Solution {

public:

  vector<int> productExceptSelf(vector<int>& nums) {

    int n=nums.size();

    vector<int> answer(n,0);

    int pro1=1,flag=0;

    int c=0;

    for(int i=0;i<n;i++)

    {

      if(nums[i]==0)

      c++;

      if(nums[i]!=0)

      pro1=pro1*nums[i];

      else

      flag=1;

    }

    for(int i=0;i<n;i++)

    {

      if(c<2){

      if(nums[i]!=0){

        if(flag==1)

          answer[i]=0;

        else

         answer[i]=pro1/nums[i];

      }

      else

        if(flag==1)

          answer[i]=pro1;

        else

          answer[i]=0;

      }

    }

    return answer;

  }

};


int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
   // vector<int> result = sol.productExceptItself(nums);

    for (int value : result) {
        cout <<value<< " ";
    }
    cout << endl;
}
