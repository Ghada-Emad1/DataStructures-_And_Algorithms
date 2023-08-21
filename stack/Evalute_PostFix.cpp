#include<bits/stdc++.h>
using namespace std;
bool isNumbericDigigt(char C);
int PerformOperation(char operation,int operand1,int operand2);
bool IsOperator(char C);

int EvalutePostFix(string exp){
    stack<int>S;
    for(int i=0;i<exp.length();i++){
        if(exp[i]==' ' || exp[i]==','){
            continue;
        }
        else if(IsOperator(exp[i])){
            int operand1=S.top();
            S.pop();
            int operand2=S.top();
            S.pop();
            int result=PerformOperation(exp[i],operand1,operand2);
            S.push(result);

        }
        else if(isNumbericDigigt(exp[i])){
            int operand;
            operand=exp[i]-'0';
            S.push(operand);
        }
    }
    return S.top();
}
int PerformOperation(char operation,int operand1,int operand2){
    if(operation=='+') return operand1+operand2;
    else if(operation=='-') return operand1-operand2;
    else if(operation=='*') return operand1*operand2;
    if(operation=='/') return operand1/operand2;
    else cout<<"Unexpected Error"<<endl;
    return -1;

}
bool IsOperator(char C){
    if(C=='+'||C=='-'||C=='*'||C=='/')return true;
    return false;
}
bool isNumbericDigigt(char C){
    if(C>='0'&&C<='9')return true;
    return false;
}
int main(){
   string expr;
   cout<<"Enter postfix Expression"<<endl;
   getline(cin,expr);
   int result=EvalutePostFix(expr);
   cout<<"result= "<<result<<endl;
}

//if you want to do evalute prefix it is the same thing but 
//the difference only in for-loop you will start from right to left