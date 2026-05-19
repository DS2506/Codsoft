#include<bits/stdc++.h>
using namespace std;
int main(){
    double num1 , num2 ;
    cout<<"Enter your first number : ";
    cin>>num1;
   
    cout<<"Enter your second number : ";
    cin>>num2;

    char op;
    cout<<"Enter the operation to be done (+ , - , * , / ): ";
    cin>>op;

    if(op=='+'){
        cout<<"The result is : ";
        cout<<num1+num2;
    }
    else if(op=='*'){
        cout<<"The result is : ";
        cout<<num1*num2;
    }
    else if(op == '-'){
        cout<<"The result is : ";
        cout<<num1-num2;
    }
    else if(op == '/'){
        if(num2 == 0 ){
            cout<<"Division not possible.";
            return 0;
        }
        cout<<"The result is : ";
        cout<<num1/num2;
    
    }
    else{
        cout << "Invalid Operator . Try again";
    }
    return 0;

}