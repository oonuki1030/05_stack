#include <stdio.h>
 #define STOCKCAPA 10 
#define STACKCAPA 10
 int main(int argc, char *argv[])
{
	char str[7];
	int data;
	int stock[STOCKCAPA];
	int stockNum=0;
	int stack[STACKCAPA];
	int stackNum=0;
	int i;
    
	while (fgets(str, sizeof(str), stdin))
 	{
 		data = atoi(str);
		switch (data){
		    case 0:
				if(stockNum > 0)
				if(stackNum > 0){
			   		i = stockNum-1;
			   		i = stackNum-1;
			   		while (i >= 0){
			    		printf("%d", stock[i]);
			    		printf("%d", stack[i]);
			    		i--;
 			    		if (i >= 0)
@@ -37,10 +37,10 @@ int main(int argc, char *argv[])
			    break;
 		    case -1:
		    	if (stockNum > 0) 
		    	if (stackNum > 0) {
		    		stockNum--;
		    		printf("%d\n", stock[stockNum]);	
		    		stackNum--;
		    		printf("%d\n", stack[stackNum]);	
		    	}
		    	else{
 		    		printf("\n");
               	}
		    	break;
 	    	default:
				if(stockNum < STOCKCAPA)
				if(stackNum < STACKCAPA){
	    			stock[stockNum] = data;
		    		stuckNum++;
	    			stack[stackNum] = data;
		    		stackNum++;
				}
		    	break;
		}
 	}
 
 	return 0;
 }
