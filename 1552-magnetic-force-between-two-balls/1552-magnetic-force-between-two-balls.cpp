class Solution{
    private:
    bool canplace(vector<int>& position, int m, int dist)
    {
        int count = 1;
        int lastpos = position[0];

        for(int i = 1; i<position.size(); i++){
            if(position[i] - lastpos >= dist){
                count++;
                lastpos = position[i];

                if(count>= m){
                     return true;
                 }
            }

        }
        return false;
    }
    public:
    int maxDistance(vector<int>& position, int m){
        sort(position.begin(), position.end());
        int low = 1;
        int high = position.back()-position.front();
        int ans = 0;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(canplace(position,m ,mid)){
                ans = mid;
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        return ans;
    }
};