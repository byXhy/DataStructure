obj = main.o LinkList.o

test : $(obj)
	gcc -o $@ $^

main.o : main.c LinkList.h
	gcc -c main.c

LinkList.o : LinkList.c LinkList.h
	gcc -c LinkList.c

clean :
	rm -rf *.o test