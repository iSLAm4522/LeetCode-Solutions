class Solution {
public:
int scoreOfParentheses(string s)
{
  stack<int> st;
  st.push(0);
  for (auto &ch : s)
  {
    if (ch == '(')
      st.push(0);
    else{
      int last = st.top();
      st.pop();
      if(last==0)
        last=1;
      else
        last*=2;
      int sum = st.top()+last;
      st.pop();
      st.push(sum);
    }
  }
  return st.top();
}
};