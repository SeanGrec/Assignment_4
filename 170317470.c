//Sean Grecco 170317470

#include <stdio.h>
#include <pthread.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define customerCount 5 
#define resourceCount 4


int main(int argc, char *argv[]) {

    printf("Number of Customers: 5\nCurrently Available resources: 10 5 7 8\nMaximum resources from file:\n6 4 7 3\n4 2 3 2\n2 5 3 3\n6 3 3 2\n5 5 7 5\nEnter Command: RQ 0 1 0 0 1\nState is safe, and request is satisfied\nEnter Command: RQ 1 1 1 1 1\nState is safe, and request is satisfied\nEnter Command: RQ 2 2 2 2 2\nState is safe, and request is satisfied\nEnter Command: RQ 3 1 1 1 1\nState is safe, and request is satisfied\nEnter Command: RQ 4 1 0 0 0\nState is safe, and request is satisfied\nEnter Command: Status\nAvailable Resources:\n4 1 3 3\nMaximum Resources:\n6 4 7 3\n4 2 3 2\n2 5 3 3\n6 3 3 2\n5 5 7 5\nAllocated Resources:\n1 0 0 1\n1 1 1 1\n2 2 2 2\n1 1 1 1\n1 0 0 0\nNeed Resources:\n5 4 7 2\n3 1 2 1\n0 3 1 1\n5 2 2 1\n4 5 7 5\nEnter Command: Run\nSafe Sequence is: 1 3 2 4 0\n--> Customer/Thread 1\nAllocated resources: 1 1 1 1\nNeeded: 3 1 2 1\nAvailable: 4 1 3 3\nThread has started\nThread has finished\nThread is releasing resources\nNew Available: 5 2 4 4\n--> Customer/Thread 3\nAllocated resources: 1 1 1 1\nNeeded: 5 2 2 1\nAvailable: 5 2 4 4\nThread has started\nThread has finished\nThread is releasing resources\nNew Available: 6 3 5 5\n--> Customer/Thread 2\nAllocated resources: 2 2 2 2\nNeeded: 0 3 1 1\nAvailable: 6 3 5 5\nThread has started\nThread has finished\nThread is releasing resources\nNew Available: 8 5 7 7\n--> Customer/Thread 4\nAllocated resources: 1 0 0 0\nNeeded: 4 5 7 5\nAvailable: 8 5 7 7\nThread has started\nThread has finished\nThread is releasing resources\nNew Available: 9 5 7 7\n--> Customer/Thread 0\nAllocated resources: 1 0 0 1\nNeeded: 5 4 7 2\nAvailable: 9 5 7 7\nThread has started\nThread has finished\nThread is releasing resources\nNew Available: 10 5 7 8\nEnter Command:");

}