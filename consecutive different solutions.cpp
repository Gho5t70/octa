#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
  int sum=0,mSum=0;
  for(int i=0;i<nums.size();i++)
  {
   if(nums[i]==0)
   {
    sum=0;
   }
   else{
    sum+=1;
    if(sum>mSum)
     mSum=sum;
   }
  }
  return mSum;
 }
};
//--------------------
class Solution1 {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
  // int arr[6];
  // int size = sizeof() / sizeof(arr[0]);
  int max_sum = 0;
  int current_sum = 0;
  for (int i = 0; i < nums.size(); i++) {
   if (nums[i] == 1) {
    current_sum = current_sum + nums[i];
    if (current_sum > max_sum) {
     max_sum = current_sum;
    }
   } else {
    current_sum = 0;
   }
  }
  return max_sum;
 }
};
//--------------
class Solution2 {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
 int count=0,max=0;
 int s=0,e=0,n=nums.size();
 while(s<n && e<n){
  if(nums[s]==1){
   e=e+1;
   while(e<n && nums[e]==1){
    e++;
   }
  }
  count=e-s;
  if(count>max){
   max=count;
  }
  s=e+1;
  e=e+1;
 }
  return max;
 }
};
//----------
int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    
    Solution sol;
    Solution1 sol1;
    Solution2 sol2;
    
    cout << "Solution 1: " << sol.findMaxConsecutiveOnes(nums) << endl;
    cout << "Solution 2: " << sol1.findMaxConsecutiveOnes(nums) << endl;
    cout << "Solution 3: " << sol2.findMaxConsecutiveOnes(nums) << endl;
    
    return 0;
}
