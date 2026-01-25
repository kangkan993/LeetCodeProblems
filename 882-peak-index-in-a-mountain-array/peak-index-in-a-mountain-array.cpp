class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = 0;
        int start = 0, end = arr.size()-1;
        int mid = start+(end-start)/2;

        while(start<=end){
            if(arr[mid]>arr[mid+1]){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }

        return ans;

    }
};