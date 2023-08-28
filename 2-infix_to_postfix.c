/* here is a short and simple algorithm for the program you have given:

Initialize a stack stack and a variable top to -1.
Prompt the user to enter an expression.
Iterate through the expression character by character:
If the current character is an operand, print it.
If the current character is an opening parenthesis, push it to the stack.
If the current character is a closing parenthesis, pop the stack and print the character until the opening parenthesis is popped.
If the current character is an operator, push it to the stack.
While the stack is not empty, pop the stack and print the character.
Here is a more detailed explanation of the algorithm:

The first step is to initialize the stack and the variable top. The stack will be used to store the operators in the expression, and the variable top will be used to keep track of the top element of the stack.
The next step is to prompt the user to enter an expression.
The third step is to iterate through the expression character by character. For each character, we do the following:
If the current character is an operand, we simply print it.
If the current character is an opening parenthesis, we push it to the stack.
If the current character is a closing parenthesis, we pop the stack and print the character until the opening parenthesis is popped. This is because the closing parenthesis indicates the end of a subexpression.
If the current character is an operator, we push it to the stack.
The last step is to while the stack is not empty, we pop the stack and print the character. This is to print all the operators that were pushed to the stack but not popped yet. */


#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x) {
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main() {
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    while(*e != '\0') {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')') {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else {
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1) {
        printf("%c",pop());
    }
    return 0;
}
