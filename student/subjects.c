// Wayne Mwashuma
//CIT-227-045/2022
	
	
#include <stdio.h>
#include <string.h>

//stores name and score of the subject.
struct Subject{
    float score;
    char name[100];
};

float total(struct Subject *subjects, int size);
float average(struct Subject *subjects , int size);
char grade(float marks);
int Display_Failed_subjects(struct Subject *subjects,int size);
void balanceMarks(struct Subject *subjects,int size);
void giveRecommendation(int number);
void display_Sort(struct Subject *subjects,int size);

int main()
{
	
	//maximum number of subjects.
	int max = 9;
	
	//initialize a array of struct  of subjects.
	struct Subject subjects[max] ;
	
	printf("Dont use names greater than 100 characters long for the subject name or the program will crash or behave on an indefined manner.\n\n");
	//get input from the user.
	for(int i = 0;i < max; i++){
    	printf("Enter name of subject:");
    	scanf("%s",subjects[i].name );
    	printf("Enter score of subject:");
    	scanf("%f",&subjects[i].score);
        printf("\n");
	}
	printf("\n =====================================\n\n");
	
	//i)Find and print total marks
	printf("Total marks: %.2f\n",total(subjects,max));
	
	//i)Find and print average marks.
	float avg = average(subjects,max);
	printf("Average marks: %.2f\n",avg);
	
	printf("\n");
	//ii)Display average grade of subjects.
	printf("Average grade is : %c\n",grade(avg));
	
	printf("\n");
	//iii)Balances the marks out.
	balanceMarks(subjects,max);
	
	printf("\n");
	//iv)Count and displays subjects failed.
	int failed = Display_Failed_subjects(subjects,max);
	
	printf("\n");
	//v)Give recommendations
	giveRecommendation(failed);
	
	printf("\n");
	//vi)Sort in descending order.
	display_Sort(subjects,max);
	
	//This is here because the executable will close immediately after results have been displayed.
	char c;
	printf("\n\t......Press Enter to Exit......");
	scanf("%c",&c);
	return 0;
}

//Calculates the total score of subjects.
float total(struct Subject *subjects , int size){
    float sum = 0;
    for(int i = 0;i < size;i++){
        sum += subjects[i].score;
    }
    return sum;
}

//Calculate the average score of subjects.
float average(struct Subject *subjects , int size){
    float avg = total(subjects,size) / size ;
    return avg;
}

//Finds grade associated with marks given
char grade(float marks){
    if( marks >= 70 ){
        return 'A';
    }else if( marks >= 60 && marks <70 ){
        return 'B';
    }else if( marks >= 50 && marks <60 ){
        return 'C';
    } else if( marks >= 40 && marks <50 ){
        return 'D';
    }
    return 'F';
}

//Displays the failed subjects and returns the numver of failed subjects.
int Display_Failed_subjects(struct Subject *subjects,int size){
    printf("\n");
	printf("Subjects failed are:\n");
	int failed = 0;
	for(int i = 0;i < size;i++){
	     if(subjects[i].score < 40){
	         failed += 1;
	         printf("\t%s.  ",subjects[i].name);
	     }
    }
	if(failed == 0)printf("None.");
	printf("\nNumber of subjects failed : %d\n",failed);
	return failed;
}
//Increases or decreases subject score based on whether subjects are failed or not.
void balanceMarks(struct Subject *subjects,int size){
    int passed = 0;
    for(int i = 0;i < size;i++){
        if(subjects[i].score > 40)passed++;
    }
    if(passed == size){
        for(int i = 0;i < size;i++)
           subjects[i].score *= 0.95;
    }
    if(passed == 0){
        for(int i = 0;i < size;i++)
           subjects[i].score *= 1.1;
    }
}

//Gives recommendations to the sutdent
void giveRecommendation(int number){
    printf("Recommentation:\n\t");
    switch(number){
        case 0:
            printf("Proceed to the next level");
        break;
        case 1:
        case 2:
            printf("Repeat/ carry forward");
        break;
        case 3:
        case 4:
        case 5:
            printf("Take supplementary exam in the failed units.");
        break;
        case 6:
        case 7:
            printf("Repeat the failed units");
        break;
        default:
            printf("Discontinue from the course");
    }
    printf("\n");
}

// bubble sort algorithm
void bubbleSort(struct Subject *array, int size) {

  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i].score < array[i + 1].score) {      
        struct Subject temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

//Displays results in descending order after sorting the subjects.
void display_Sort(struct Subject *subjects,int size){
    bubbleSort(subjects,size);
    printf("Ypur subject scores are as follows:\n");
    for(int i = 0;i < size;i++){
        printf("\t %s      %.2f \n", 
            subjects[i].name,
            subjects[i].score
        );
    }
}