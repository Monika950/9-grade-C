#include <stdio.h>
#include <stdlib.h>
#include "processes.h"
struct Process processes[5];
int processescount = 0;

static unsigned int nextprocessid()
{
	return rand();
}

struct Process createnewprocess(char* name)
{
	if (processescount != 5)
	{
		for(int i=0;name[i];i++)
			processes[processescount].name[i]=name[i];
		processes[processescount].ID = nextprocessid();
		processescount++;
		return processes[processescount - 1];
	}
	else 
		printf("No space for new processes\n");
}

int stopprocess(int id)
{
	for(int i=0;i<5;i++)
	{
		if(processes[i].ID==id)
		{
			processescount--;
			for(int j=i;j<4;j++)
				processes[j]=processes[j+1];
		}
	}
}