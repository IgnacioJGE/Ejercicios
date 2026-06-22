class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int sol=0;
        bool haso=false;
        for(int num:nums){
            if(num==0) haso=true;
            if(num+1>nums.size()) continue;
           if(find(nums.begin(),nums.end(),num+1)==nums.end()){
            sol= num+1;
            break;
           }
        }
        if(sol==0){
            return haso? nums.size()+1: 0;
        }
        return sol;
    }
};
//recorro el vector y cuando encuentro un numero en el que el mismo +1 no se encuentra en el vector rompe el loop y lo devuelve, si tiene 0  deveulve el max si no tiene 0 y no encontro la solucion deveuvle 0 