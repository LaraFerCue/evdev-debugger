/*-
 * Copyright (c) 2018 Roberto Fernandez Cueto <roberfern@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

#include <sys/time.h>

#include <dev/evdev/input.h>

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

static char * name;
static int  keep_going = 1;

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
	struct input_event reg;

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

	while ((bread = read(device_fd, &reg, sizeof(struct input_event))) > 0 &&
		keep_going)
	{
		fprintf(stdout, "time = %ld, type = %hx, code = %hx, value = %x\n",
			reg.time.tv_sec, reg.type, reg.code, reg.value);
	}
	close(device_fd);
	return 0;
}
