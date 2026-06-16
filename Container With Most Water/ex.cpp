class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz=height.size();
        int max=0;
        int maxi=0;
        for(int i=0;i<sz;i++){
            if(maxi>height[i])continue;
            maxi=height[i];
            for(int j=i+1;j<sz;j++){
                int wsz=0;
                height[i]<height[j]? wsz=height[i]*(j-i): wsz=height[j]*(j-i);
                if(max<wsz) {
                    max=wsz; 
                }
            }

        }
        return max;
    }
};