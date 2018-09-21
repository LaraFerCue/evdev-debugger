CFLAGS += -g
SRCS=	main.c

OBJS=	${SRCS:.c=.o}
PROGRAM= evdev-debugger

all: ${PROGRAM}

${PROGRAM}: ${OBJS}
	${CC} ${LDFLAGS} ${OBJS} -o ${PROGRAM}

clean:
	rm -f ${OBJS} ${PROGRAM}
