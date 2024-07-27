#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>intersection;
        int i =0 , j=0;
        while(i<nums1.size() && j<nums2.size())
        {
                if(nums1[i]<nums2[j])
                {
                    i++;
                }
                else if(nums1[i]>nums2[j])
                {
                    j++;
                }
                else
                {
                    intersection.push_back(nums1[i]);
                    i++;
                    j++;

                }

        }
        return intersection;



        
    }
};