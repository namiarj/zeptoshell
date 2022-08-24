#include <unistd.h>

#include "zeptoshell.h"

int
main()
{
	char line[LINE_MAX];
	init_sig();
loop:
	if (isatty(STDIN_FILENO)) prompt();
	if (read_line(line)) run_line(line);
	goto loop;
}
