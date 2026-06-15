using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int contsend=0;
        int contchange=1;
        for(int i=0 ; i<nums.size();i++){
           // cout<< "Estoy en i=" <<i<<" y conchange vale="<<contchange<<" el valor de num es="<< nums.at(i)<<" por ultimo consentd= "<<contsend<<endl;
            if(i==nums.size()-1){
                if(contchange>contsend){
                    contsend=contchange;
                    contchange=1;
                } 
            }else{
                if(nums.at(i)+1==nums.at(i+1)){
                contchange++;
            }else{

                if(contchange>contsend){
                    contsend=contchange;
                } 
                                contchange=1;
            }
            }
        }
        if(contsend==0) contsend=1;
    return contsend;
    }
};