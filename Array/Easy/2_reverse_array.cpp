// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

string reverseWord(string str){
    
  //Your code here
  string ans = str;
  int s = 0;
  int e = ans.length() - 1;
  
  while(s < e) {
      swap(ans[s] , ans[e]);
      s++;
      e--;
  }
  
  return ans;
}
