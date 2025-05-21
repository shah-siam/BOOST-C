#include<stdio.h>

int rem(int x[],int y[]){
    int reminder_1 =x[1] -(x[0]*x[2]);
    int reminder_2 =y[1] -(y[0]*y[2]);
    if (reminder_1 > reminder_2){
        printf("Alice\n");
    }
    else if (reminder_1 == reminder_2){
        printf("Draw\n");
    }
    else{
        printf("Bob\n");
    }

}
int main (){
    int x[3],y[3];
    for (int i=0; i<3; i++){
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
    }
    rem(x,y);


}