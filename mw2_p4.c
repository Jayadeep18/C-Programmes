
#include <stdio.h>

int main() {
int i=0,j=0,ct=0,ct2=0;

//Divided pattern into four parts

//part1
for(i=0;i<3;i++){
    //code for pattern 8
    for(j=3;j>i+1;j--){
        printf(" ");
    }
    if(i==0){
        for(int ct=0;ct<7;ct++){
            printf("*");
        }
        
    }
    else{
        int ct=9;
        ct=ct+i;
        ct=ct-(3-(i+2));
        printf("**");
        ct=ct-2;
        // printf("%d",ct);
        while(ct>3){
            printf(" ");
            ct--;
        }
        printf("**");
    }
    //code to print other than 8
    ct2=9;
    ct2=ct2+i;
    while(ct2>3){
        printf(" ");
        ct2--;
    }
    printf("**");


    printf("\n");  
}

//part2
for(int i=2;i>=0;i--){
    //code for pattern 8
    for(j=3;j>i+1;j--){
        printf(" ");
    }
    if(i==0){
        for(int ct=0;ct<7;ct++){
            printf("*");
        }
        
    }
    else{
        int ct=9;
        ct=ct+i;
        ct=ct-(3-(i+2));
        printf("**");
        ct=ct-2;
        // printf("%d",ct);
        while(ct>3){
            printf(" ");
            ct--;
        }
        printf("**");
    }



    // other than 8 code 
    if(i==0){
        printf("   ");
        printf("*******");
        printf(" ");
        printf("**");
    }
    else{
        ct2=14;
        ct2=ct2-i;
        while(ct2>3){

            printf(" ");
            ct2--;
        }
        printf("**");
    }
    printf("\n");
      
}

//part3
for(i=1;i<3;i++){
    //code for pattern 8
    for(j=3;j>i+1;j--){
        printf(" ");
    }
    if(i==0){
        for(int ct=0;ct<7;ct++){
            printf("*");
        }
        
    }
    else{
        int ct=9;
        ct=ct+i;
        ct=ct-(3-(i+2));
        printf("**");
        ct=ct-2;
        // printf("%d",ct);
        while(ct>3){
            printf(" ");
            ct--;
        }
        printf("**");
    }
    //code other than 8
    ct2=14;
    ct2=ct2-i;
    while(ct2>3){
        printf(" ");
        ct2--;
    }
    printf("**");
    printf("\n");  
}

//part4
for(int i=2;i>=0;i--){
    //code for pattern 8
    for(j=3;j>i+1;j--){
        printf(" ");
    }
    if(i==0){
        for(int ct=0;ct<7;ct++){
            printf("*");
        }
        
    }
    else{
        int ct=9;
        ct=ct+i;
        ct=ct-(3-(i+2));
        printf("**");
        ct=ct-2;
        // printf("%d",ct);
        while(ct>3){
            printf(" ");
            ct--;
        }
        printf("**");
    }
    //code other than 8
    ct2=9;
    ct2=ct2+i;
    while(ct2>3){
        printf(" ");
        ct2--;
    }
    printf("**");
    printf("\n");  
}
  return 0;
}
