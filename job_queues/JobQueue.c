#include<stdlib.h>

#include<stdio.h>
#include "JobQueue.h"

job * MakeQueue(int jobNum){
   job * curr, * head;
   head = NULL;
   int i,t;
   if(jobNum<1){
	   printf("No valid queue size");
	   return(NULL);
   }
   else{
		for(i=0;i<jobNum;i++) {
			curr = (job *)malloc(sizeof(job));
			printf("please enter job%d processing time:\n",i+1);
			scanf("%d",&curr->time);
			if(curr->time<0){
				printf("unvalid process time\n");
				return(NULL);
			}
			else{
				curr->next  = head;
				head = curr;
			}
		 }
	  return(head);

   }
}

//The input of all the following functions is the head of the queue
 int QueueSize(job * h){
   /*Impelement nthis function such that returns the size of the queue*/
	int i = 0;
	
	job * temp = h; 

	while(temp != NULL){
	
	temp = temp->next;	
	i +=1;
	}
	return i ; 
 }


 int TotalTime(job * h){
	/*Imlement this function such that it returns the totall time required
	  to process all jobs*/
	int tim = 0 ;
	
	job * temp = h ;	 
	
	while(temp != NULL){
	tim = tim + temp->time; //To add the time of every job
	temp = temp->next;
	

	}

	return tim;
 }



 int RetElem(int i,job*h){
 /* Implement this function such that returns the process time of the ith 
 element in the queue*/
	int element = i ;
	int count = 0;
	job * temp = h; 
		
	while (temp != NULL){
	
	if(element == count)
		break;	
	
	count = count + 1;
	temp = temp->next;
	
	}

	return temp->time;	



 }
 int LeastPri(job * h){
	 /* Assuming that the a process priority has inverse proportion withits processing time, 
	    implement this function such that it returns the 
		processing time of the job with highest priority*/

	int leastime = 0;

	job * temp = h; 
	leastime = temp->time; //current 
	
	while(temp != NULL){
	
	
		if (leastime > temp->time ) 
		{
			leastime = temp->time;
			
		}
		temp = temp->next;
		
	}

	return leastime;
 }

















