#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0;rear=0;
void insert(int);
void del();
void traverse();
void number();


int main()
{
    int ch,item;
    while(1){
    printf("1. enqueue\n");
    printf("2. dequeue\n");
    printf("3. traverse\n");
    printf("4. exit\n");
    printf("5. number\n");
    printf("enter your choice\n");
    scanf("%d",&ch);

    switch(ch){
        case 1:printf("enter the element\n");
               scanf("%d",&item);
                insert(item);
               break;

    case 2: printf("");
            del();
            break;
     case 3:printf("");
          traverse();
             break;
    case 4: exit(0);
    case 5:number();
    break;
    default:printf("invalied input\n");
    }
    }
    return 0;
}
void insert(int item){
if(front==(rear+1)%CAPACITY){
    printf("cqueue is full\n");
}
else{
       queue[rear]=item;
    rear=(rear+1)%CAPACITY;

    printf("---inserted---\n")
    ;
}
    printf("front=%d  rear=%d\n",front,rear);

}
void del(){

if(front==rear){
    printf("cqueue is empty\n");
    //printf("%d  %d\n",front,rear);
}
else{
        printf("deleted item %d\n",queue[front]);
    front=(front+1)%CAPACITY;


}
printf("front=%d  rear=%d\n",front,rear);
}


void traverse(){
if(front==0&&rear==0){
    printf("queue is empty\n");
    return;
}
else if(front<=rear){

    for(int i=front;i<rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
    else if(front<=CAPACITY-1&&rear>=0){
        for(int j=front;j<CAPACITY;j++){
            printf("%d ",queue[j]);
        }

    for(int i=0;i<rear;i++){
        printf("%d",queue[i]);
    }
    printf("\n");
    }

}

void number(){
if(rear>=front)
printf("%d\n",rear-front);
else{
    printf("%d\n",(CAPACITY-front)+(rear-0));
}
       }
