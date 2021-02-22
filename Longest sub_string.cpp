#include <string.h>
#include<algorithm> 
#include <map> 
#include <iterator> 

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(); 
        int ans = 0;
        map<char,int> set_map;
        for(int i = 0, j = 0; j < n; j++){
            if(set_map.find(s[j]) != set_map.end()){
               i = max(set_map.at(s[j]), i);
            set_map.at(s[j]) = j+1;   
            }
            ans = max(ans, j - i + 1);
          
            set_map.insert(pair<char, int>(s[j], j+1));
            
        }
        return ans;                                                         
    }
};
