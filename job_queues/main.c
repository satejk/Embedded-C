#include<stdlib.h>
#include<stdio.h>
#include "JobQueue.h"

 /* Complete the following functions:

 int TotalTime(job *);
int int LeastPri(job *);
 
 
 For each function write:
 
 pre-condition: what should the input paramters represent / satisfy
 post-condition: what will hold after calling the function
 test-cases: write at least 4 test-cases representing different combination of allowed / forbidden inputs and their ouputs 

Include the implementation of all functions in JobQueue.c 

Include all the testcases in main.c 
 
Compile and link JobQueue.c and main.c  and run main*/

void main() {
	int qSize,total;
	int q_size = 0; // for queue size
	int total_time = 0 ; // for total time
	int i_elem;	
	int least_time;

	job *qHead; 
	printf("please enter the size of queue\n");
	scanf("%d",&qSize);
	qHead=MakeQueue(qSize);
	
    /* Put all your test cases for the implemented functions here */

	// function 
	q_size = QueueSize(qHead);
	// function
    total_time = TotalTime(qHead);

	//function
	i_elem = RetElem(0,qHead);

	//function
	least_time = LeastPri(qHead);
	
	
	printf("----------Halmstad University-------------- \n");
	printf("size of queue is :%d \n",q_size);
	printf("The total time for executing the job queue is : %d \n",total_time); 


	printf("element = 0 : time = %d \n",i_elem);
	printf("least time is : %d \n",least_time);
	
}
