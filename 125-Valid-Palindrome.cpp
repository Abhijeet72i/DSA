class Solution {
public:
 bool isvalid(char ch){
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
  return 1;
  }
  return 0;
}
char toLowerCase(char ch){
if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
    return ch;}
    else{
        ch = ch -'A' + 'a';
        return ch;
    }
}
 bool checkPalindrome(string a){
           int st = 0;
           int n= a.size();
           int e = n-1;
           while(st<=e){
               if(a[st]!=a[e]){
                   return 0;
               }
               else{
                   st++;
                   e--;
               }
           }
           return 1;
       }
public:
    bool isPalindrome(string s) {
        // faaltu character hta do//
       
       string temp = \\;
       for(int i = 0;i<s.size();i++){
           if(isvalid(s[i])){
               temp.push_back(s[i]);
           }
       }
       // lower case me kr do//
       for(int i = 0;i<temp.size();i++){
        temp[i]=toLowerCase(temp[i]);
       }
       return checkPalindrome(temp);
      
    }
};