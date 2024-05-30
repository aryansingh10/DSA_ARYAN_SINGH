class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int maxarea=0;
        while(start<end){
            int area=min(height[start],height[end])*(end-start);
            maxarea=max(area,maxarea);
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
        }
        return maxarea;
    }
};