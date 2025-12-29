#include <stdio.h>
int main(){
	
	int h,m,s;
	int next_minutes=0 ;
	scanf("%d:%d:%d",&h,&m,&s);
	
	if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        return 0;
    }
    
    int i;
    for (i=0 ; i < 2; i++){
    	if (i == 0 )
			next_minutes=next_minutes+1;
			
		if (i == 1 ) {
			printf("Next minutes: ");
			scanf("%d",&next_minutes);
			
		    if (next_minutes < 0 || next_minutes > 120) {
   				return 0;
    		}
    		
			h = h*60+(m+next_minutes);
			h= h % (24*60);
			m = h % 60;
			h = h/ 60;
		}
		printf("hour:%d\nmimute:%d\nsecond:%d\n",h,m,s);
	}
	return 0;
}

