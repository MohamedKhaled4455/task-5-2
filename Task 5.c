#include <stdio.h>
float math_score;
float programming;
float result;

struct courses 
{
	
	int credit_hours[3];
	float student_score[];
};

struct student
{
	int courses0 [2];
	float GPA[];
	
};
//////////////////////////////////////////////////////
float gpa_calc(){
float	result = (math_score + programming)/2 ;
return result ;
}

int main(){
	printf("Enter your score in math (out of 4)\n");
	 scanf("%f",&math_score);

	
	printf("Enter your score in programming (out of 4)\n");
   	scanf("%f",&programming);
   	
   	printf("your GPA is: %f",gpa_calc());
   	
}

//https://github.com/MohamedKhaled4455/Task-5.git
