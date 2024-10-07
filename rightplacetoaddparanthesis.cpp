
class Solution {
public:
    unordered_map<string, vector<int>> memo;
    vector<int> diffWaysToCompute(string expression) {
        if(memo.find(expression)!=memo.end())
        {
            return memo[expression];
        }
        vector<int>res;
        for(int i=0;i<expression.size();i++)
        {
            char op=expression[i];
            if(op=='+'||op=='-'||op=='*')
            {
                vector<int>s1=diffWaysToCompute(expression.substr(0,i));
                vector<int>s2=diffWaysToCompute(expression.substr(i+1));
                for(int a:s1)
                {
                    for(int b:s2)
                    {
                        if(op=='+')
                        {
                            res.push_back(a+b);
                        }
                        else if(op=='-')
                        {
                            res.push_back(a-b);
                        }
                        else if(op=='*')
                        {
                            res.push_back(a*b);
                        }
                    }
                }
            }
        }
        if(res.empty()) res.push_back(stoi(expression));
        memo[expression]=res;
        return res;
    }
};