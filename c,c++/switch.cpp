#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *accepted_strings[] = {
"string 0",
"string 1",
"string 2",
};

int
select_str(char *s)
{
int i;
for (i=0; i < sizeof accepted_strings/sizeof *accepted_strings;
i++)
if (!strcmp(s, accepted_strings[i]))
return i;
return -1;
}

int
main(int argc, char **argv)
{
char *test;
int idx;

if (argc<2)
test = "test";
else
test = argv[1];

switch( idx = select_str(test)) {
case 0: /* Fallthru */
case 1: /* Fallthru */
case 2: /* Fallthru */
printf("selected %d\n", idx);
break;
default:
printf("unknown string\n");
break;
}
return EXIT_SUCCESS;
}
