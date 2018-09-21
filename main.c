#include <sys/time.h>

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

static char * name;
static int  keep_going = 1;

struct input_device {
	struct timeval	time;
	unsigned short	type;
	unsigned short	code;
	unsigned int	value;
};

void
usage()
{
	fprintf(stderr, "%s -f <dev>\n", name);
}

void
stop(int sig)
{
	keep_going = 0;
}

int
main(int argc, char** argv)
{
	int device_fd;
	ssize_t bread;
	struct input_device reg;

	name = argv[0];
	if (argc != 3) {
		usage();
		return EINVAL;
	}

	if (memcmp(argv[1], "-f", 2) != 0) {
		usage();
		return EINVAL;
	}

	signal(SIGINT, stop);
	signal(SIGKILL, stop);
	signal(SIGQUIT, stop);

	device_fd = open(argv[2], O_RDONLY);
	if (device_fd < 0) {
		perror(name);
	}

	while ((bread = read(device_fd, &reg, sizeof(struct input_device))) > 0 &&
		keep_going)
	{
		fprintf(stdout, "time = %ld, type = %hx, code = %hx, value = %x\n",
			reg.time.tv_sec, reg.type, reg.code, reg.value);
	}
	close(device_fd);
	return 0;
}
