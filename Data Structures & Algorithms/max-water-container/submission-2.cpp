class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = (int)heights.size() - 1;
        int max_container = 0;

        while (left < right){
            max_container = max(max_container, (right - left) *  min(heights[left], heights[right]));
            if (heights[left] < heights[right]){
                left ++;
            }
            else{
                right --;
            }
        }
        return max_container;
    }
};
