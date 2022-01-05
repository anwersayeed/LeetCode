class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();
        
        int n = (n1 < n2) ? n1 : n2;
        
        string str;
        
        for(int i=0;i<n;i++){
            if(str1[i] == str2[i]){
                str += str1[i];
            }else{
                break;
            }
        }
        
        if(str.length() == 0){
            return str;
        }
        
        int m = str.length();
        
        while(n1%m != 0 || n2%m != 0){
            m--;
            if(m == 0){
                string temp;
                return temp;
            }
        }
        
        str = str.substr(0, m);
        string temp = "";
        
        for(int i=0;i<n1;i+= m){
            if(str != str1.substr(i, m)){
                return temp;
            }
        }
        for(int i=0;i<n2;i+=m){
            if(str != str2.substr(i, m)){
                return temp;
            }
        }
        return str;
    }
};