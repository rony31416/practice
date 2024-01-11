//https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    
     int findPeakElement(vector<int>& nums,int low ,int high ,int n) {
         if(low <= high ) 
         {
             int mid = (low + high )/2 ;
             if(nums[n-1] < nums[mid]) return findPeakElement(nums,mid+1,high , n);
             else return findPeakElement(nums,low,mid-1,n);
         }
        return low ;
    }

     int searchInsert(vector<int>& nums,int l,int h, int target) {
        int  low = l , high = h ;
        while(low <= high) 
        {
           int  mid = low + (high - low)/2 ;
           if(nums[mid] == target) return mid;

           if(nums[mid] < target) low = mid + 1;
           else high = mid - 1; 
        }
        return -1 ;
        
    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int pivot = findPeakElement(nums,0,n-1,n);
       
        if(nums[pivot] == target ) {
            return pivot;
        }
        if(nums[n-1] < target) return  searchInsert(nums,0,pivot-1,target);
        return searchInsert(nums,pivot +  1 , n -1 , target);
        
    }
};