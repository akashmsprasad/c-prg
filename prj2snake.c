#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int player ,computer;
    computer=rand()%3;
    /*   snake --> 0
        water --> 1
        gun--> 2*/
       
    printf("chosse the option: 0:for snake\t 1:for water\t  2:for gun\n");
    scanf("%d",&player);
    printf("computer choose:%d\n",computer);
    if(player == 0 && computer ==0){
        printf("It's draw! ");
    }
    else if(player == 0 && computer ==1){
         printf("you win!!!! ");
    }
    else if(player == 0 && computer ==2){
        printf("opse you lose !!!! ");
    }
    else if(player == 1 && computer ==0){
        printf("opse you lose !!!! ");
    }
    else if(player == 1 && computer ==1){
         printf("It's draw! ");
    }
    else if(player == 1 && computer ==2){
        printf("you win!!!! ");
    }
    else if(player == 2 && computer ==0){
        printf("you win!!!! ");
    }
    else if(player == 2 && computer ==1){
        printf("opse you lose !!!! ");
    }
    else if(player == 2 && computer ==2){
         printf("It's draw! ");
    }
        }





