#include<stdio.h>
#include<stdlib.h>
/*****************************************/
struct node{
int info;
struct node *Next;
};
/*****************************************/
/***********Get Node**********************/
struct node* GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
/*****************************************/
/********Insert Begin********************/
void InsBeg( struct node **CSTART,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    if((*CSTART)!=NULL)
        p->Next=(*CSTART)->Next;
    else
        (*CSTART)=p;
    (*CSTART)->Next=p;

}
/*****************************************/
/*******Insert End************************/
 void InsEnd(struct node **CSTART,int x)
{
     struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=(*CSTART)->Next;
    (*CSTART)->Next=p;
    (*CSTART)=p;
}
/*****************************************/
/***********Delete Begin******************/
int DelBeg(struct node **CSTART)
{
    int x;
    struct node *p;
    if(CSTART==NULL)
       {
        printf("VOID DELECTION");
        exit(1);
    }
    else
    {
        p=(*CSTART)->Next;
      if((*CSTART)->Next!=(*CSTART))
      {
       (*CSTART)->Next=p->Next;
      }
      else
        {
            ((*CSTART)=NULL);
        }
        x=p->info;
        free(p);
        return x;
    }
}
/*****************************************/
/*******Delete End************************/
int DelEnd(struct node **CSTART)
{
     struct node *p;
     struct node *q;
     int x;
     q=(*CSTART);
     p=(*CSTART)->Next;
     while(p->Next!=(*CSTART))
     {
      p=p->Next;
     }

      if((*CSTART)->Next==(*CSTART))
      {
          (*CSTART)=NULL;
      }


      else
      {
        p->Next=(*CSTART)->Next;
  (*CSTART)=p;

      }

         x=q->info;
         free(q);
         return x;

}
/*****************************************/
/*********Searching***********************/
 struct node* Search(struct node **CSTART,int x)
 {
     struct node *p;
     struct node *q;
     p=(*CSTART);
     q=NULL;
     while(p!=NULL)
     {
         if(p->info==x)
       {
           return p;
        }
     p=p->Next;
    }
    return NULL;
 }
/*****************************************/
/*******Insert After**********************/
void InsAft(  struct node **p,int x)
{
     struct node *q;
    q=GetNode();
     q->info=x;
     q->Next=(*p)->Next;
     (*p)->Next=q;

}
/*****************************************/
/*****Delete After***********************/
 int DelAft(struct node **p,int x)
{

    struct node *q;
    q=(*p)->Next;
    if((*p)->Next==(*p))
    {
      (*p)=NULL;
    }
    else
    {
    (*p)->Next=q->Next;
    }
    x=(*p)->info;
    free(q);
    return x;
}
/*****************************************/
/************Traverse*********************/
void Traverse(struct node *CSTART)
{
    struct node *p;
    p=(CSTART)->Next;
    while(p!=(CSTART))
    {
        printf(" %d ",p->info);
        p=p->Next;
    }
    printf(" %d ", p->info);
}
/*****************************************/
/****Concatenate***************************/
 void Conicate(struct node **CSTART1,struct node **CSTART2)
{
    struct node *q,*CSTART3;
    q=(*CSTART1)->Next;
    (*CSTART1)->Next=(*CSTART2)->Next;
    (*CSTART2)->Next=q;
    //return (*CSTART1);
Traverse(*CSTART2);
}
/*****************************************/
/******Main******************************/
void main()
{
    struct node *CSTART=NULL,*CSTART1=NULL,*CSTART2=NULL;
    struct node* i;
    printf("INSERT AT BEGIN");
    InsBeg(&CSTART,100);
    InsBeg(&CSTART,200);
    InsBeg(&CSTART,300);
    InsBeg(&CSTART,400);
    Traverse(CSTART);
    printf("\n");
    printf("INSERT AT END");
    InsEnd(&CSTART,600);
    InsEnd(&CSTART,700);
    Traverse(CSTART);

    printf("\n");
    printf("DELETE AT BEGIN");
    DelBeg(&CSTART);
    Traverse(CSTART);

    printf("\n");
    printf("DELETE AT END");
    DelEnd(&CSTART);
    Traverse(CSTART);

    //printf("\n");
    i=Search(&CSTART,300);
    //printf("%d",i);*/

    printf("\n");
    printf("INSERT AFTER 300\n ");
    InsAft( &i,1000);
    Traverse(CSTART);

    printf("\n");
    printf("DELETE AFTER 1000\n");
    i=Search(&CSTART,1000);
    DelAft(&i,1000);
    Traverse(CSTART);

    printf("\n");
    printf("CIRCULAR LINKED LIST1");
    InsBeg(&CSTART1,800);
    InsBeg(&CSTART1,900);
    InsBeg(&CSTART1,1100);
    InsBeg(&CSTART1,1200);
    Traverse(CSTART1);

    printf("\n");
    printf("CIRCULAR LINKED LIST2");
    InsBeg(&CSTART2,800);
    InsBeg(&CSTART2,900);
    InsBeg(&CSTART2,1100);
    InsBeg(&CSTART2,1200);
    Traverse(CSTART2);

      printf("\n");
   Conicate(&CSTART1,&CSTART2);
   //Traverse(CSTART1);

}
/*****************************************/

