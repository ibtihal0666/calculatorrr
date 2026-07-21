#include<stdio.h>
int main(){
int numbers[100];
char operators[100];
int n=0;
int op=0;
printf("Enter your number: ");
scanf("%d",&numbers[n]);
n=n+1;// table has a numbers when user enters a new number it will be add new space in the table
while(1)
  {
  scanf("%c",&operators[op]);
    if(operators[op]=='='){
        break;
    }
    op=op+1;
    scanf("%d",&numbers[n]);
    n=n+1;

  }
}
