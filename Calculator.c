#include<stdio.h>
#include "cs50.h"

int add(int a, int b){
    int c= a+b;
    printf("%i\n", c);
}
int sub(int a, int b){
   int c= a-b;
    printf("%i\n", c);
}
int mult(int a, int b){
    int c= a*b;
    printf("%i\n", c);
}
int div(int a, int b){
    int c= a/b;
    printf("%d\n", c);
}
int main(void){
    string x = get_string("");
    if(x[1]=='+'){
        add((float) x[0],(float) x[2]);
    }
    else{
        if(x[1]=='-'){
            sub((int) x[0],(int) x[2]);
        }
        else{
             if(x[1]=='*'){
            mult((int) x[0],(int) x[2]);
        }   else{
             if(x[1]=='/'){
            div((int) x[0],(int) x[2]);
        }
        }
        }
}
}