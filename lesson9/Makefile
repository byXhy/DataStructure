obj = main.o StaticList.o

test : $(obj)
	gcc -o $@ $^

main.o : main.c StaticList.h
	gcc -c main.c

StaticList.o : StaticList.c StaticList.h
	gcc -c StaticList.c

clean :
	rm -rf *.o test