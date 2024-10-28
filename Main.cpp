#include <iostream>

using namespace std;

int main(){
    float a, b, result;
    char arithmetic;

    do{
        cout <<"------CALCULATOR------"<< endl;
        cin >> a >> arithmetic >> b;

        switch(arithmetic){
            case '+':
                result = a + b;
                cout <<"Result: " << result << endl;
                break;

            case '-':
                result = a - b;
                        cout <<"Result: " << result << endl;
                break;

            case '*':
                result = a * b;
                        cout <<"Result: " << result << endl;
                break;

            case '/':
                result = a / b;
                        cout <<"Result: " << result << endl;
                break;

            default:
                cout <<"Invalid Input!"<<endl;
                break;
        }
    }while(true);
}
