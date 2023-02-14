#ifndef PRO
#define PRO
struct Process
{
	int ID;
	char name[30];
};
extern struct Process processes[5];
extern int processescount;

static unsigned int nextprocessid();
struct Process createnewprocess(char* name);
int stopprocess(int id);
#endif