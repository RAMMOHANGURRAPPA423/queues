#include<stdio.h>
#define N 5
int deque[N];
int f=-1,r=-1;
void enqueue(int x){
    if((f==0&&r==N-1)||(f==r+1)){
        printf("queue is full");
    }
    else if(f==-1&&r==-1){
        f=r=0;
        deque[f]=x;
    }
    else if(f==0){
        f=N-1;
        deque[f]=x;
    }
    else{
        f--;
        deque[f]=x;
    }
}
void dequeuerear(int x){
 if(f==0&&r==N-1){
        printf("queue is full");
    }   
    else if(f==-1&&r==-1){
        f=r=0;
        deque[r]=x;
    }
    else if(r==N-1){
        r=0;
        deque[r]=x;
    }
    else{
        r++;
        deque[r]=x;
    }
}
void display(){
    int i=f;
    while(i!=r){
        printf("%d",deque[i]);
        i=(i+1)%N;
    }
    printf("%d",deque[r]);
}
void getfront(){
    printf("%d",deque[f]);
}
void dequeuefront(){
  if(f==-1&&r==-1){
        printf("queue is empty");
    }   
    else if(f==r){
        f=r=1;
    }
    else if(f==N-1){
        printf("%d",deque[f]);
        f=0;
    }
    else{
        printf("%d",deque[f]);
        f++;
    }
}
/*void dequeuerear(){
 if(f==0&&r==N-1){
        printf("queue is empty");
    }
    else if(f==r){
        f=r=-1;
    }
    else if (r==0){
        printf("%d",deque[r]);
        r=N-1;
    }
    else{
        printf("%d",deque[r]);
        r--;
    }
}*/
void main(){
    enqueue(2); 
    enqueue(5);
    enqueue(-1);
    enqueue(0);
    enqueue(7);
    enqueue(4);
    display();
    dequeuefront();
    dequeuerear(4);
    dequeuefront();
}
