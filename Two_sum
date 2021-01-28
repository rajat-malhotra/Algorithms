#include <algorithm>
#include <bits/stdc++.h> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> maps;
    vector<int> res;  
    for(int i = 0; i < nums.size(); ++i){
        int complement = target - nums[i];
        if(maps.find(complement) != maps.end()){
            res.push_back(maps.at(complement));
            res.push_back(i);
            return res;
            }
        maps.insert(pair<int, int>(nums[i],i));
        }
    throw "No two sum!";
    }
};
