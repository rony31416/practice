//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
    int lowerBound(vector<int> & arr,int x) 
    {
        int high = arr.size() - 1;
        int low = 0 ,ans = - 1;
        while(low <= high) {
            int mid = (high+low)/2;
            if(arr[mid] == x) {
                ans = mid;
                high = mid - 1;
               
            }
            else if(arr[mid] > x ) high = mid -1 ;
            else  low = mid+1;;
        }
        return ans;
    }

    int upperBound(vector<int> & arr,int x) 
    {
        int high = arr.size() - 1;
        int low = 0 ,ans = -1;
        while(low <= high) {
            int mid = (high+low)/2;
            if(arr[mid] == x) {
                ans = mid;
                low = mid+1; 
               
            }
            else if(arr[mid] < x) low = mid + 1;
            else  high = mid - 1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
        int l = lowerBound(nums,target);
        int h = upperBound(nums,target);
    
        return {l,h};
        
    }
};