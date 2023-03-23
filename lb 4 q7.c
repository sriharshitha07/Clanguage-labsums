#include <stdio.h>
int opt=0;
void menu(int num1,int num2) {
   printf("\nInput your option :\n");
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n");
    scanf("%d",&opt);
    if (opt==1) {
      
        printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);
	}
        
      else if(opt==2){
        printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);
	}
        
      else if(opt==3){
        printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);
	}  
      
     else if(opt==4){
        if(num2==0) {
          printf("The second integer is zero. NOT POSSIBLE.\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);
        }  }
     else{
        printf("Input correct option\n");
         }
    }
int main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	menu(n1,n2);
	return 0;
	
	}

