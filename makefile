X = g++ 
Y = hello.cpp

hello : main.o hello.o factorial.o
	$(X) -o hello main.o hello.o factorial.o
	
main.o : main.cpp functions.h
	$(X) -c main.cpp
	
factorial.o : factorial.cpp functions.h
	$(X) -c factorial.cpp
	
hello.o : $(Y) functions.h
	$(X) -c $(Y)
	
clean : 
	rm hello

refresh : 
	rm hello hello.o main.o factorial.o
