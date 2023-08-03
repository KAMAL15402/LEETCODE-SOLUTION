/**
m.insert('2',"abc");
         m.insert('3',"def");
          m.insert('4',"ghi");
           m.insert('6',"mno");
             m.insert('7',"pqrs");
              m.insert('8',"tuv");
               m.insert('9',"wxyz");

**/


class Solution {
public:

    void solve(){

    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> m;
               string symbols[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};   
               vector<string> ans;
               if(digits.empty()){
                   return ans;
               }
               ans.push_back("");

               for(char ch : digits){
                   vector<string> temp;
                   int num = ch - '0';
                   for(const string& s : ans){
                       for(char symbol : symbols[num]){
                           string tmp = s+symbol;
                           temp.push_back(tmp);
                                                 }
                   }
               ans.swap(temp);
               }
 return ans;        
    }
};