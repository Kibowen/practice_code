cc=gcc
cflags= -Wall -Wextra -Werror -pedantic
cfiles= @beg.c @end.c print_node.c node_clean.c prompt.c
objs= node_clean.o @beg.o print_node.o @end.o prompt.o

all: node.exe

node.exe: $(objs) node.h
	$(cc) $(cflags) -o $@ $(objs)

%.o: %.c
	$(cc) $(cflags) -c -o $@ $^

clean: 
	rm -r *.o
run:
	.\node.exe