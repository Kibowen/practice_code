cc=gcc
Cflags= -Wall -Wextra -Werror -pedantic
Cfiles= calc.c operations.c 
Cfiles2= advcalc.c _getline.c read_input.c
Objs= calc.o operations.o 
Objs2= advcalc.o _getline.o read_input.o


sub1: advcalc.exe

sub2: calc.exe

advcalc.exe: $(Objs2) calc.h
	$(cc) $(Cflags) -o $@ $(Objs2)


calc.exe: $(Objs) calc.h
	$(cc) $(Cflags) -o $@ $(Objs)

%.o: %.c
	$(cc) $(Cflags) -c -o $@ $^

run:
	./calc.exe

run2:
	./advcalc.exe

## cleaning proceedures.
clean: 
	rm -r *.o
