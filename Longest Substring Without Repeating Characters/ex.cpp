class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> caract;
        int cont=0;
        int sender=0;
        for(int i =0; i<s.size();i++){
        auto it=find(caract.begin(),caract.end(),s.at(i));
            if(it==caract.end()){
                caract.push_back(s.at(i));
                cont++;
                for(int j=0;j<caract.size();j++){
                    cout<< caract.at(j);
            } 
            cout<<endl;
        }else{

            caract.erase(caract.begin(),it+1);
            if(cont>sender){
            caract.push_back(s.at(i));
            sender=cont;
            cont=caract.size();
            }else {
            caract.push_back(s.at(i));
            cont=caract.size();
            }}

        }
        if(cont>sender) sender=cont;
        return sender;
    }
};