obj = main.o CircleList.o

test : $(obj)
	gcc -o $@ $^

main.o : main.c CircleList.h
	gcc -c main.c

CircleList.o : CircleList.c CircleList.h
	gcc -c CircleList.c

clean :
	rm -rf *.o test