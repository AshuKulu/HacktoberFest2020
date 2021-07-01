#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct NODE
{
    char symbol;
    int precedence;
    int Rank;
} NODE;

NODE INFIXOperators[] = {{'+', 1, -1}, {'-', 1, -1}, {'*', 3, -1}, {'/', 3, -1}, {'^', 5, -1}, {'(', 9}, {')', 0}},
     STACKOperators[] = {{'+', 2, -1}, {'-', 2, -1}, {'*', 4, -1}, {'/', 4, -1}, {'^', 6, -1}, {'(', 0}, {')', 0}};

int findrank(char a)
{
    int rank = 1;
    for (int i = 0; i < 6; i++)
    {
        //printf("%c\t%c\n", a, INFIXOperators[i].symbol);
        if (a == INFIXOperators[i].symbol)
        {
            rank = INFIXOperators[i].Rank;
            break;
        }
    }

    return rank;
}
int ishigherprec(char a, char b)
{
    int aprec = 7, bprac = 8;
    for (int i = 0; i < 7; i++)
    {
        if (a == INFIXOperators[i].symbol)
            aprec = INFIXOperators[i].precedence;
        if (b == STACKOperators[i].symbol)
            bprac = STACKOperators[i].precedence;
    }

    //printf("%d\t%d\n", aprec, bprac);

    if (aprec > bprac)
    {
        return 1;
    }
    else if (aprec == bprac)
        return 0;
    else
        return -1;
}
typedef struct STACK
{
    char *data;
    int top;
} STACK;

void PUSH(STACK *s, char symbol)
{

    s->data = (char *)realloc(s->data, sizeof(char) * (s->top + 1));
    s->data[s->top] = symbol;
    s->top++;
}
char POP(STACK *s)
{
    char temp = s->data[s->top - 1];
    s->data[s->top - 1] = '\0';
    s->top--;
    return temp;
}

void display(STACK *s)
{
    for (int i = 0; i < s->top; i++)
    {
        printf("%c", s->data[i]);
    }
    printf("\n");
}

int main()
{
    char *INFIX, *R_POLISH, i, next;
    int len = 0, Plen = 0, RANK = 0, a = 0;
    STACK S;

    INFIX = (char *)malloc(sizeof(char) * 100);
    R_POLISH = (char *)malloc(sizeof(char) * 100);
    R_POLISH[0] = '\0';
    S.top = 0;
    S.data = NULL;
    PUSH(&S, '(');

    scanf("%c", &i);
    while (i != '\n')
    {
        INFIX[len] = i;
        len++;
        scanf("%c", &i);
    }

    INFIX[len++] = ')';
    INFIX[len] = '\0';

    //puts(INFIX);

    next = INFIX[a++];

    while (next != '\0')
    {
        if (S.top < 1)
        {
            printf("top is little");
            exit(0);
        }
        while (ishigherprec(next, S.data[S.top - 1]) == -1)
        {
            char temp = POP(&S);
            R_POLISH[Plen++] = temp;
            //display(&S);
            RANK += findrank(temp);
            if (RANK < 1)
            {
                printf("rank is small");
                exit(0);
            }
        }
        if (ishigherprec(next, S.data[S.top - 1]) != 0)
        {
            PUSH(&S, next);
        }
        else
            POP(&S);
        next = INFIX[a++];
    }

    R_POLISH[Plen] = '\0';
    puts(R_POLISH);
}
