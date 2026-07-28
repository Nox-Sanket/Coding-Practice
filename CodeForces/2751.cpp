class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {

        int n = positions.size();
        stack<pair<char,int>> idx;
        for(int i=0;i<n;i++)
        {
           if(idx.empty()){
                idx.push({directions[i],i});
           }else{
                if(directions[i] == idx.top().first){
                    idx.push({directions[i],i});
                }else{
                    if(healths[i] > healths[idx.top().second]){
                        while(healths[i] > healths[idx.top().second] && !idx.empty()){
                            healths[i]--;
                            healths[idx.top().second] =0;
                            idx.pop();
                        }
                    }
                    if(healths[i] < healths[idx.top().second]){
                        healths[i] =0;
                        healths[idx.top().second]--;
                        if(healths[idx.top().second] == 0){
                            idx.pop();
                        }
                    }
                    if(healths[i] == healths[idx.top().second]){
                        healths[i] = 0;
                        healths[idx.top().second] = 0;
                        idx.pop();
                    }

                    if(healths[i] > 0){
                        idx.push({directions[i],i});
                    }
                }
            } 
        }

        vector<int> ans;
        for(int i =0;i<n;i++)
        {
            if(healths[i] > 0){
                ans.push_back(healths[i]);
            }
        }
        return ans;
    }
};


 