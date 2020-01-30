#include <stdio.h>

int main(void){
	int man,woman,kid;

	for(man=0;man<=45;man++){
		for(woman=0;woman<=45;woman++){
			for(kid=0;kid<=45;kid++){
				if((kid*0.5+man*3+woman*2 == 45)&&(kid+man+woman==45))
					printf("ÐèÒªman %d, woman %d, kid %d.\n",man,woman,kid);
			}
		
		}
	
	}
	return 0;
}