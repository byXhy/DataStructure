obj = main.o DLinkList.o

test : $(obj)
	gcc -o $@ $^

main.o : main.c DLinkList.h
	gcc -c main.c

DLinkList.o : DLinkList.c DLinkList.h
	gcc -c DLinkList.c

clean :
	rm -rf *.o test