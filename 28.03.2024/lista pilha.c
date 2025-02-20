#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100

int main(void)
{

typedef struct {
    int items[MAX_SIZE];
    int top;

}Stack;


void init(Stack *stack){
    stack->top = -1;

    }

    int isEmpty(Stack *stack){
        return stack->top == -1;

    }
        int isFull(Stack *stack){
        return stack->top == MAX_SIZE - 1;

    }
        void push(Stack *stack, int value){
            if (isFull(stack)){
                printf("Erro: pilha cheia\n");
                return;
            }
            stack->items[++stack->top] = value;
        }
        int pop(Stack *stack){
            if (isEmpty(stack)){
                printf("Erro: pilha vazia\n");
                return -1;
            }
            return
            stack->items[stack->top--];
        }

}
