#include <stdio.h>
#include<stdlib.h>
struct student
{
    int rno;
    char name[20];
    float marks;
};
int main(){
    struct student array_stu[5];
    struct student *ptr=NULL;
     ptr=(struct student*)malloc(sizeof(struct student));
     int i;
     for(i=0;i<5;i++){
         printf("enter employee details %d\n",i+1);
         scanf("%d %s %f",&(ptr+i)->rno,(ptr+i)->name,&(ptr+i)->marks);
         
     }
         printf("displaying information:");
         for(i=0;i<5;i++){
             printf("%d\n%s\n%f\n",(ptr+i)->rno,(ptr+i)->name,(ptr+i)->marks);
         }
         free(ptr);
     }
