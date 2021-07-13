#include<iostream>
using namspace std;

int main(){
    char op;
    double a, b ;
    
    cout << "Enter operator: +, -, *, /:";
    cin >> op;
    
    cout << "Enter two operands: ";
    cin >> a >> b;
    
    switch(op) {
        case '+':
            cout << a << "+" << b << "=" << a + b ;
            break;
            
        case '-':
            cout << a << "-" << b << "=" << a - b ;
            break;
         
        case '*':
            cout << a << "*" << b << "=" << a * b ;
            break;
            
        case '/':
            cout << a << "/" << b << "=" << a / b ;
            break;
            
        default:
            cout << "operator is not correct";
            break;
            
         }
         
         return 0;
         
     }
