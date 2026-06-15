using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        string substr="";
        for (int i= 0; i<s.size();i++){
            size_t  pos= s.find(s.at(i), i + 1);;
            //cout << s.at(i)<< " "<< pos << endl;
            while(pos!=string::npos){
            if(i==0){substr=s.substr(i,pos-i+1);
            }else{substr=s.substr(i,pos-i+1);} 
                //cout<< substr<<endl;
                if(ispalindromic(substr)&&substr.size()>res.size()){
                    res=substr;
                }
                

            pos = s.find(s.at(i), pos + 1);

            }
            
        }
        if(res.empty())res=s.at(0);
    return res;
    }
bool ispalindromic(const string& s){
    int l = 0, r = s.size() - 1;

    while(l < r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}


};