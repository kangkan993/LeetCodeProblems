class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end = x;
        int mid = start+(end-start)/2;
        int ans = -1;

        if(x<2){
            return x;
        }

        while(start<=end){
            if(mid == (x/mid)){
                ans = mid;
                return ans;
            }
            else if(mid<(x/mid)){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
};