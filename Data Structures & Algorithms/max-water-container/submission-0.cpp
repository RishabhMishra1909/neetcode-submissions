class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int lp = 0 , rp = n-1;
        int maxWater = 0;

        while(lp < rp){
            int width = rp - lp;
            int ht = min(heights[lp] , heights[rp]);
            int currWater = width * ht;
            maxWater = max(maxWater , currWater);

            heights[lp] < heights[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};
