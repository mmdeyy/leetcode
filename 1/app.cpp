#include<iostream>  
#include<vector>
#include "app.h"
using namespace std;

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
	 vector<int> result(2);
	 int n = nums.size();
	  for(int i = 0,j = n-1;(i<n)&&(j>=0);){
           if(nums[j]+nums[i]>target){
              --j;
           }else if(nums[j]+nums[i]<target){
			  ++i; 
		   }else{
			   result.push_back(i);
			   result.push_back(j);
			   return result;
		   }
       }
	   return result;
}