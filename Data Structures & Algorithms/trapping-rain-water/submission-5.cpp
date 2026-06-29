using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        // left is the position
        int left = 0;
        // right is the position
        int right = height.size()-1;
        //maxleft is the value
        int max_left = height[left];
        int max_right = height[right];
        int trap = 0;
        
        while (left < right){

            if (height[left] < height[right]){
                left += 1;
                max_left = max(max_left, height[left]);

                if (height[left] < max_left){
                    trap += max_left - height[left];
                }

            } else {
                right -= 1;
                max_right = max(max_right, height[right]);
                if (height[right] < max_right){
                    trap += max_right - height[right];

                }
            }
        }
        return trap;
    }   


    int max(int a, int b){
        if (a > b){
            return a;
        } else {
            return b;
        }
    }  
};