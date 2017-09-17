#include<iostream> 
#include "app.h"
using namespace std;
int main()
{
   Solution s();
   vector<int>& nums = [2, 7, 11, 15];
   int target = 9;
   vector<int> result = s.twoSum(nums,target);
   
    cout<<"result:"<<endl;  
    for(vector<int>::iterator it = result.begin();it!=result.end();it++)  
    {  
        cout<<*it<<"     ";  
    }  
    cout<<endl;  
}