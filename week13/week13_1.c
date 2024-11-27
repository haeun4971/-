#include <stdio.h>


struct student{
	int ID;
	char name[100];
	float grade;
	
	
};

int main(void){
	struct student s1 = {2416614, "haeunkim", 4.3};
	
	printf("ID: %d\n", s1.ID);
	printf("name: %s\n",s1.name);
	printf("grade: %f", s1.grade);
	
	
	return 0;
	
}
