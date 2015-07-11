obj = main.o list.o

test : $(obj) 
	gcc -o $@  $^

main.o : main.c list.h
	gcc -c main.c

list.o : list.c list.h
	gcc -c list.c

clean : 
	rm -rf *.o test
