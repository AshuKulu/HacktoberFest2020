#include<stdio.h>
#include<stdlib.h>

struct adjList{
    int v;
    struct adjList *next;
};

struct Stack{
    int data;
    struct Stack *next;
};

int isEmpty(struct Stack *root){
    return !root;
}

void push(struct Stack **root,int data){
    struct Stack *temp;
    temp = (struct Stack*)malloc(sizeof(struct Stack));
    temp->data = data;
    temp->next = *root;
    *root = temp;
}

int pop(struct Stack** root){
    if(isEmpty(*root)){
        return INT_MIN;
    }
    struct Stack *temp = *root;
    *root = (*root)->next;
    int i = temp->data;
    free(temp);
    return i;
}

void DFS_iterative(struct adjList *arr[],int V,int E,int visited[],int j){
    struct Stack* s = NULL;
    push(&s,j);
    struct adjList *t;
    while(!isEmpty(s)){
        j = pop(&s);
        if(visited[j] == 0){
            visited[j] = 1;
            printf("%d ",j);
            for(t = arr[j-1];t != NULL ;t=t->next){
                push(&s,t->v);
            }
        }
    }
}


void insert(struct adjList *arr[],int V,int E,int a,int b){
    struct adjList *temp,*t;
    temp = (struct adjList*)malloc(sizeof(struct adjList));
    temp->v = b;
    temp->next = NULL;

    if(arr[a-1] == NULL){
        arr[a-1] = temp;
    }
    else{
        t = arr[a-1];
        while(t->next != NULL){
            t = t->next;
        }
        t->next = temp;
    }
    
}   

void DFS(struct adjList *arr[],int V,int E,int visited[],int j){
    if(visited[j] == 0){
        printf("%d ",j);
        visited[j] = 1;
        struct adjList *t;
        t = arr[j-1];
        for(t = arr[j-1];t != NULL;t=t->next){
            if(visited[t->v] == 0){
                DFS(arr,V,E,visited,t->v);
            }
        }
    }
}


void DFS_arr_2d(int V,int E,int arr[][V+1],int visited[],int j){
    if(visited[j] == 0){
        printf("%d ",j);
        visited[j] = 1;
        int i;
        for(i=1;i<=V;i++){
            if(arr[j][i] == 1 && visited[i] == 0){
                DFS_arr_2d(V,E,arr,visited,i);
            }
        }
    }
}


int main(){
    int V,E,i,j,a,b;
    int choice=0;
    printf("Enter \n1.Directed Graph\n2.Undirected Graph\n");
    scanf("%d",&choice);
    printf("Enter the Number of Vertices and Edges in the graph :\n");
    scanf("%d %d",&V,&E);
    struct adjList *arr[V];
    for(i=0;i<V;i++){
        arr[i] = NULL;
    }
    printf("Enter the Edges in the graph: \n");
    int arr_d[V+1][V+1];
    for(i=0;i<=V;i++){
        for(j=0;j<=V;j++){
            arr_d[i][j] = 0;
        }
    }
    
    for(i=0;i<E;i++){
        scanf("%d %d",&a,&b);
        if(choice == 1){
            insert(arr,V,E,a,b);
            arr_d[a][b] = 1;
        }
        else{
            insert(arr,V,E,a,b);
            insert(arr,V,E,b,a);
            arr_d[a][b] = 1;
            arr_d[b][a] = 1;
        }
    }

    int visited[V+1];
    for(i=0;i<=V;i++){
        visited[i] = 0;
    }

    // for adjacency list

    printf("For which number DFS starts with : \n");
    scanf("%d",&j);
    printf("DFS by recusive is :  ");
    int flag = 0;
    while(flag != 1){
        DFS(arr,V,E,visited,j);  // DFS by recursive process
        for(i=1;i<=V;i++){
            if(visited[i] != 1){
                flag = 0;
                j = i;
                printf("\n Disconnected Graph : ");
                break;
            }
            else{
                flag = 1;
            }
        } 
    }
    printf("\n");

    for(i=0;i<=V;i++){
        visited[i] = 0;
    }

    printf("DFS by iterative is :  ");
    DFS_iterative(arr,V,E,visited,j);   // DFS by iterative process
    printf("\n");

    for(i=0;i<=V;i++){
        visited[i] = 0;
    }    
    printf("DFS by recursive by adjacency Matrix is :  ");
    DFS_arr_2d(V,E,arr_d,visited,j);  // for adjacency Matrix
    
    
    return 0;
}