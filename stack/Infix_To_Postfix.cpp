#include<bits/stdc++.h>
using namespace std;
int HasHighterPrecdeence(char operator1,char operator2);
bool IsOperator(char c);
bool IsOperand(char c);
int GetOperatorWeight(char op);
int IsRightAssoxiative(char op);
string InfixToPostFix(string expression){
    // Declaring a Stack from Standard template library in C++. 
	stack<char> S;
	string postfix = ""; // Initialize postfix as empty string.
	for(int i = 0;i< expression.length();i++) {

		// Scanning each character from left. 
		// If character is a delimitter, move on. 
		if(expression[i] == ' ' || expression[i] == ',') continue; 

		// If character is operator, pop two elements from stack, perform operation and push the result back. 
		else if(IsOperator(expression[i])) 
		{
			while(!S.empty() && S.top() != '(' && HasHighterPrecdeence (S.top(),expression[i]))
			{
				postfix+= S.top();
				S.pop();
			}
			S.push(expression[i]);
		}
		// Else if character is an operand
		else if(IsOperand(expression[i]))
		{
			postfix +=expression[i];
		}

		else if (expression[i] == '(') 
		{
			S.push(expression[i]);
		}

		else if(expression[i] == ')') 
		{
			while(!S.empty() && S.top() !=  '(') {
				postfix += S.top();
				S.pop();
			}
			S.pop();
		}
	}

	while(!S.empty()) {
		postfix += S.top();
		S.pop();
	}

	return postfix;
}
int HasHighterPrecdeence(char operator1,char operator2){
    int op1=GetOperatorWeight(operator1);
    int op2=GetOperatorWeight(operator2);
    if(op1==op2){
        if(IsRightAssoxiative(op1))return false;
        return true;
    }
    if(op1>op2)return true;
    return false;

}
int IsRightAssoxiative(char op){
    if(op=='$')return true;
    return false;
}
int GetOperatorWeight(char op){
    int weight=-1;
    switch (op)
    {
        case '+':
        case '-':
          weight=1;
        case '*':
        case '/':
          weight=2;
        case '$':
          weight=3;

    }
    return weight;
}
bool IsOperator(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='$')return true;
    return false;
}
bool IsOperand(char c){
    if(c>='0'&& c<='9')return true;
    if(c>='a'&&c<='z')return true;
    if (c>='A'&& c<='Z')return true;
    return false;
}
int main(){
    string expr;
    cout<<"Enter infix Expression"<<endl;
    getline(cin,expr);
    string postfix=InfixToPostFix(expr);
    cout<<"output = "<<postfix;

}