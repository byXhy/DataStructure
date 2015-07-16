obj = main.o SeqList.o

test : $(obj) 
	gcc -o $@  $^

main.o : main.c SeqList.h
	gcc -c main.c

SeqList.o : SeqList.c SeqList.h
	gcc -c SeqList.c

clean : 
	rm -rf *.o test
