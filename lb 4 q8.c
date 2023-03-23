#include <stdio.h>
int opt=0;
void menu() {
   printf("\nInput your option :\n");
    printf("1-Area of a circle.\n2-Perimeter of circle.\n3-Area of rectangle.\n4-Perimeter of rectangle.\n");
    scanf("%d",&opt);
    int r;
    int l,b;
    if (opt==1) {
      
      printf("\n input radius of the circle\n");
      scanf("%d",&r);
        printf("\nAREA of circle is: %f\n",3.14*r*r);
	}
        
     else if(opt==2){
		 printf("\n input radius of the circle\n");
      scanf("%d",&r);
        printf("\nThe PERIMETER of circle is: %f\n",2*3.14*r);
	}
        
      else if(opt==3){
		  
		  printf("\n input length and breadth of the rectangle\n");
      scanf("%d %d",&l,&b);
        printf("\nAREA of rectangle is: %d\n",l*b);
	}  
      
     else if(opt==4){
          printf("\n input length and breadth of the rectangle\n");
      scanf("%d %d",&l,&b);
      printf("\nPERIMETER of rectangle is: %d\n",2*(l+b));
      }
     else{
        printf("Input correct option\n");
         }
    }
int main(){
	menu();
	return 0;
	
	}

