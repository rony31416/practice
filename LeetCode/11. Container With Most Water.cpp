//https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ;
        int right = height.size() - 1;
        long long int  maxArea = 0;
        while(left < right) 
        {
            long long int  mn = min(height[left],height[right]);
            long long int currentArea = (mn)*(right - left);
            if(currentArea > maxArea) maxArea = currentArea;
            if(height[left] < height[right]){
                left++;
            }
            else right--;
        }

        return maxArea;
    }
};