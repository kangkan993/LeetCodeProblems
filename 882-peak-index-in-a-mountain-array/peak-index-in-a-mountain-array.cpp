class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = 0;
        int start = 0, end = arr.size()-1;
        int mid;

        while(start<=end){
            mid = start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        return ans;

    }
};