#include<stdio.h>
#include<stdlib.h>

int main(){

int n, i, count = 0, gr = 0, gm = 0;
char bride[10000];
char groom[10000];
scanf("%d",&n);
scanf("%s",bride);
scanf("%s",groom);

for(i=0;i<n;i++){

if(groom[i]=='r')
  gr++;
else
  gm++;

}

for(i=0;i<n;i++){

if(bride[i]=='r'){if(gr>0){
      gr--;
      count++;
     }
     else
     break;}

else{if(gm>0){

   gm--;
   count++;
   }
   else
   break;}

}

printf("%d",n-count);

}
