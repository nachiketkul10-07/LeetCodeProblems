class Solution {
public:
    int maxArea(vector<int>& height) {

     
int width,tall;
        int i = 0;
        int j = height.size() - 1;
        int area, maxarea = 0;
        while(i<height.size()&& j>=0)
        {
            width = j - i;
            tall = min(height[i],height[j]);
            area = tall*width;
            maxarea = max(area,maxarea);
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }

        }
    return maxarea;    
    }
};