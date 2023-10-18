#include <stdio.h>
//#include <stddef.h>

float operate (float a,float b,char op){
    switch(op){
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
        default:
            printf("\nNo such operator supported!");
    }
    return 0.0;
}

void exitSmooth (bool error){
    if(error)getchar();
    char c;
    printf("\n\n\n...press enter to exit...");
    scanf("%c",&c);
}

void intro (){
    printf("This is a simple float calculator that supports:\n");
    printf("\t 1.Addition");
    printf("\t 2.Subtraction");
    printf("\t 3.Multiplication");
    printf("\t 4.Division");
    printf("\nExpressions are in the form of \'a + b\' where \'+\' is a generic operator.");
    printf("\n\n");
}
void requestInput(float* a,float* b,char* op){
    printf("\nEnter operand a:");
    scanf("%f",a);

    printf("Enter operand b:");
    scanf("%f",b);
    //necessary hack as the \n is being read on the next printf.
    getchar();

    printf("Enter operator:");
    //because this is a char ptr,has to be accessed like this.
    //or use strncopy in stddef.h,but this may crash here.
    op[0] = getchar();
}
int main (){
    float a,b;
    char op;

    intro();
    requestInput(&a,&b,&op);
    printf("%f",operate(a,b,op));
    exitSmooth(true);
}
