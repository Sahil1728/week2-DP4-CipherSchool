// leetcode link of the problem
// https://leetcode.com/problems/next-greater-element-i/
// code
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        for(int i=0;i<nums1.size();i++){
            bool found =false;
            bool added = false;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    found=true;
                    continue;
                }
                if(found==true and nums2[j]>nums1[i]){
                    sol.push_back(nums2[j]);
                    added = true;
                    break;
                }
            }
            if (added==false){
                sol.push_back(-1);
            }
        }
        return sol;
    }
};
