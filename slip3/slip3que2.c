//Write a C program to evaluate postfix expression 
#include<stdio.h> 
#include<ctype.h> 
#include<string.h> 

#define MAX 20 

struct stack 
{ 
    int data[MAX]; 
    int top; 
}s; 

void init() 
{ 
    s.top = -1; 
} 

int isempty() 
{ 
    return s.top == -1; 
} 

int isfull() 
{ 
    return s.top == MAX - 1; 
} 

void push(int num) 
{ 
    if (isfull()) 
        printf("Stack is overflow\n"); 
    else 
    { 
        s.top++; 
        s.data[s.top] = num; 
    } 
} 

int pop() 
{ 
    if (isempty()) 
    { 
        printf("Stack is underflow\n"); 
        return -1; 
    }
    else 
    { 
        int num = s.data[s.top]; 
        s.top--; 
        return num; 
    } 
} 

int main() 
{ 
    char s1[20]; 
    int i, a, b, c, d, result, val1, val2; 

    printf("Enter expression in postfix: "); 
    fgets(s1, sizeof(s1), stdin); 

    printf("Enter values of a, b, c, d: "); 
    scanf("%d%d%d%d", &a, &b, &c, &d); 

    init(); 

    for (i = 0; s1[i] != '\0'; i++) 
    { 
        if (isalpha(s1[i])) 
        { 
            switch (s1[i]) 
            { 
                case 'a': push(a); break; 
                case 'b': push(b); break; 
                case 'c': push(c); break; 
                case 'd': push(d); break; 
            } 
        } 
        else 
        { 
            val1 = pop(); 
            val2 = pop(); 
            switch (s1[i]) 
            { 
                case '+': result = val2 + val1; break; 
                case '-': result = val2 - val1; break; 
                case '*': result = val2 * val1; break; 
                case '/': result = val2 / val1; break; 
            } 
            push(result); 
        } 
    } 

    printf("\nResult = %d\n", pop()); 

    return 0; 
}

