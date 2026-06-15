using namespace std;
class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
       vector<array<int,2>> posiblecombos;

   array<int,2> sol;
   for(int i=0; nums.size();i++){
    int srch=target-nums.at(i);
    auto it= find(nums.begin(),nums.end(),srch);
    if(it!=nums.end()&&(int)(it-nums.begin())!=i){
        cout<<(find(nums.begin(),nums.end(),srch)-nums.begin());
        return {i,(int)(find(nums.begin(),nums.end(),srch)-nums.begin())};
    }
   }
   return{0,0};
    }

};