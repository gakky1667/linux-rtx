/*
 * rt_task.c
 *
 * Sample program that executes one periodic real-time task.
 * Each job consumes 1 second, if it is not preempted.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <resch/api.h>
#include "tvops.h"

static struct timespec ms_to_timespec(unsigned long ms)
{
	struct timespec ts;
	ts.tv_sec = ms / 1000;
	ts.tv_nsec = (ms - ts.tv_sec*1000) * 1000000LL;
	return ts;
}

int main(int argc, char* argv[])
{
	int i;
	unsigned long prio, policy=1;
	struct timespec period, runtime, timeout;
	struct timeval tv1, tv2, tv3;

	if (argc != 4) {
		printf("Error: invalid option\n");
		printf("usage: prio period policy\n");
		/* You should valid "#define SCHED_DAG" if use SCHED_DAG*/
		printf("policy\n1 : SCHED_FP\n2 : SCHED_EDF\n3 : SCHED_DAG\n"); 
		exit(EXIT_FAILURE);
	}

	prio = atoi(argv[1]);					/* priority. */
	period = ms_to_timespec(atoi(argv[2]));	/* period. */
	runtime = ms_to_timespec(1000);			/* execution time. */
	timeout = ms_to_timespec(1000);			/* timeout. */

	/* bannar. */
	printf("sample program\n");

	switch(atoi(argv[3])){
		case SCHED_FP:
			policy = SCHED_FP;  //SCHED_FP = 1 
			printf("scheduling policy = SCHED_FP\n\n");
			break;
		case SCHED_EDF:
			policy = SCHED_EDF; //SCHED_EDF = 2
			printf("scheduling policy = SCHED_EDF\n\n");
			break;	
		case SCHED_DAG:
			policy = SCHED_DAG; //SCHED_DAG = 3
			printf("scheduling policy = SCHED_DAG\n\n");
			break;
		default:
			policy = SCHED_FP;
			printf("scheduling policy = SCHED_FP\n\n");
		break;
	}

	rt_init(); 
	rt_set_period(period);
	rt_set_runtime(runtime);
	rt_set_scheduler(policy); /* you can also set SCHED_EDF & SCHED_DAG */
	rt_set_priority(prio);
	rt_run(timeout);

	for (i = 0; i < 20; i++) {
		gettimeofday(&tv1, NULL);
		printf("start: %ld:%06ld\n", (long)tv1.tv_sec, (long)tv1.tv_usec);
		fflush(stdout);
		do  {
			gettimeofday(&tv2, NULL);
			/* tv2 - tv1 = tv3 */
			tvsub(&tv2, &tv1, &tv3);
		} while (tv3.tv_sec < 1);
		printf("finish: %ld:%06ld\n", (long)tv2.tv_sec, (long)tv2.tv_usec);
		fflush(stdout);
		if (!rt_wait_period()) {
			printf("deadline is missed!\n");
		}
	}

	rt_exit();
	
	return 0;
}
