#include<stdio.h>
#include<string.h>
struct stud {
   char name[50];
   float score;
};
//Please do not modify struct stud
//You are only allowed to modify inside printThreeLeaders
void printThreeLeaders(struct stud studs[], int count) { //why is count here? C arrays do not carry any size indicator, we 
							  //must explicitly pass the number of elements in as an argument 

	//Please do not modify the content of studs array
	struct stud first, second, third;
	//Your code here
	float firstP = studs[0].score, secondP = studs[0].score, thirdP = studs[0].score; 
	int firstIndex = 0, secondIndex = 0; //thirdIndex = 0; 
	//Please find the top three highest scoring students on the leaderboard
    for(int i = 0; i < count; i++){
        if(studs[i].score > firstP){
            firstP = studs[i].score; 
            first.score = studs[i].score;
            strcpy(first.name, studs[i].name); 
			firstIndex = i;
        }
    }

    for(int i = 0; i < count; i++){
        if(studs[i].score > secondP && firstIndex < i){ //studs[i].score != firstP){
            secondP = studs[i].score;
            second.score = studs[i].score;
            strcpy(second.name, studs[i].name); 
			secondIndex = i;
        }
    }

    for(int i = 0; i < count; i++){
        if(studs[i].score > thirdP && secondIndex < i){ //(studs[i].score != firstP && studs[i].score != secondP ) ){
            thirdP = studs[i].score;
            third.score = studs[i].score;
            strcpy(third.name, studs[i].name); 
        }
    }
	//and print out their names and scores.
	//You are allowed to use string functions such as strcmp or strcpy
	//Although you might not need them

	//Please do not modify the following code
	printf("Leader board:\n");
	printf("First place: %s, %.2f\n", first.name, first.score);
	printf("Second place: %s, %.2f\n", second.name, second.score);
	printf("Third place: %s, %.2f\n", third.name, third.score);


}


//Please do not modify main function
int main(void) {
	struct stud students[20];
	int stud_count = 0;
	char temp_name[50];
	float grade = 0;
	printf("Enter a test score(-1 to quit), or\n");
	printf("Enter a grade first, then a student's name\n");
	scanf("%f", &grade);
	while (grade != -1)
	{

		scanf("%s", temp_name);
		students[stud_count].score = grade;
		strcpy(students[stud_count].name, temp_name);
		stud_count ++;
		
		printf("Enter a test score(-1 to quit), or\n");
		printf("Enter a grade first, then a student's name\n");
		scanf("%f", &grade);
	
	}
	if(stud_count > 2) {
		printThreeLeaders(students, stud_count);
	}
	return 0;
}