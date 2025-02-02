class Solution {
public:
bool isValid(string s){
  map<char, char> mp;
  mp['}'] = '{';
  mp[')'] = '(';
  mp[']'] = '[';

  stack<char> brackets;
  for (auto &c : s)
  {
    if(mp.count(c)){
      if(brackets.empty())
        return false;
      char open = mp[c];
      char current_open = brackets.top();
      if(open != current_open)
        return false;
      brackets.pop();
    }
    else
      brackets.push(c);
  }
  return brackets.empty();
}
};