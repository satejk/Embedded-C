//
//  JobQueue.h
//  practical 0
//


#ifndef lab0_JobQueue_h
#define lab0_JobQueue_h


typedef struct Jobs {
   int time;
   struct Jobs * next;
}job;



job * MakeQueue(int);
/*
pre-conditions: the process time of all jobs in the queue should be positive.
                the size of queue is greater than zero.

post-condition: the process RetElem(i)>0 for all 1<=i<=qSize
				after building the queue QueueSize(qHead)>0
test-case:
	build the queue;
	for all i such that 1<=i<=qSize, call RetElem(i) and check that it is positive
	cal QueueSize(qHead) and check the returened value to be positive

*/


int QueueSize(job *);
/*
pre-conditions: none
                

post-condition: Should return non-zero positive queue size
				
test-case: 
	enter size as 1;
	enter size as 0;
	enter size as -1;
	enter size as 3;
	
	

*/
int RetElem(int,job*);
/*
pre-conditions: i'the element input should be i>=0 and i < queue size

post-condition: should return a non - zero positive integer
test-case:
	for Queue size = 3
	RetElem(-1,qHead);
	RetElem(0,qHead);
	RetElem(3,qHead);
	RetElem(1,qHead);

*/
int TotalTime(job *);
/*
pre-conditions: time Should be positive integer

post-condition: should return sum of job time
test-case:
	for Queue of 3;
	Enter time as 0 , 1 ,3;
	Enter time as 1 , 2, -1;
	Enter time as 1, 2, 1.2;
	Enter time as 1, 2, 4;


*/
int LeastPri(job *);
/*
pre-conditions: none

post-condition: return least time
test-case:
	for Queue of 3;
	Enter time as 0 , 1 ,3;
	Enter time as 1 , 0, 2;
	Enter time as 1, 2, 0;
	Enter time as 1, 1 , 1;
	

*/



#endif
