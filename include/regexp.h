#define void int
#define CHARBITS 0377
#define strchr index
#define NSUBEXP  10

typedef struct regexp {
  char *startp[NSUBEXP];
  char *endp[NSUBEXP];
  char regstart;	/* Internal use only. */
  char reganch;		/* Internal use only. */
  char *regmust;	/* Internal use only. */
  int regmlen;		/* Internal use only. */
  char program[1];	/* Unwarranted chumminess with compiler. */
} regexp;

extern regexp *regcomp();
extern int regexec();
extern void regsub();
extern void regerror();