#include<iostream> 
#include<vector>
#include "app.h"
using namespace std;
int main()
{
	
	vector<int> nums(4);
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
   
   Solution s = Solution();
	int target = 9;
	vector<int> result = s.twoSum(nums,target);
   
    cout<<"result:"<<endl;  
    for(vector<int>::iterator it = result.begin();it!=result.end();it++)  
    {  
        cout<<*it<<"     ";  
    }  
    cout<<endl;  
}