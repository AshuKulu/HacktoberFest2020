#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence (char ch) {
    if (ch == '+' || ch == '-') {
        return 1;
    }
    else if (ch == '*' || ch == '/') {
        return 2;
    }
    else if (ch == '^') {
        return 3;
    }
    else {
        return 0;
    }
}

string topostfix(string str){
    stack <char> s;
    string expression;
    s.push('_');
    
    for(int i = 0; i < str.length(); i++){
        
        if (isalnum(str[i])) {
            expression += str[i];
        }
        
        else if (str[i] == '(') {
            s.push('(');
        }
        
        else if (str[i] == '^') {
            s.push('^');
        }
        
        else if (str[i] == ')') {
            while (s.top() != '(' && s.top() != '#') {
                expression += s.top();
                s.pop();
    
            }
            s.pop();
        }
        
        else {
            if (precedence(str[i]) > precedence(s.top())) {
                s.push(str[i]);
            }
            
            else {
                while (s.top() != '_' && precedence(str[i]) <= precedence(s.top())) {
                    expression += s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
        }
        }
        
        while (s.top() != '_') {
        expression += s.top();
        s.pop();
    
    }
    return expression;
}


int main()
{
    string s;
    cout << "Enter the expression: ";
    cin >>s;
    cout << topostfix(s);

    return 0;
}
