class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> operationSigns = {"+", "-","/","*"};
        stack<string> stacky;
        for(int i=0;i<tokens.size();i++){
            if(operationSigns.find(tokens[i])!=operationSigns.end()){
                int oper1 = stoi(stacky.top());
                stacky.pop();
                int oper2 = stoi(stacky.top());
                stacky.pop();
                if(tokens[i]=="+"){
                    oper1 = oper2+oper1;
                }
                if(tokens[i]=="-"){
                    oper1 = oper2-oper1;
                }
                if(tokens[i]=="/"){
                    oper1 = oper2/oper1;
                }
                if(tokens[i]=="*"){
                    oper1 = oper2*oper1;
                }
                stacky.push(to_string(oper1));
            }
            else{
                stacky.push(tokens[i]);
            }
        }
        return stoi(stacky.top());
    }
};
