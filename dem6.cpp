#include <stdio.h>

int main(){
	int score;
	scanf("%d", &score);
	if (score < 68){
		if (score < 0){
			printf("error score");
		}
		else if ( score < 55){
			printf("F");
		} else {
			printf("D");
		}
	} else {
		if (score > 100){
			printf("error score");
		}
		else if (score < 75){
			printf("C %d", 75-score);
		} else {
			if ( score < 85){
				printf("B");
			} else {
				printf("A");
			}
		}
	}
	
	return 0;
}
