all: helloworldfunc.o helloworld.o
	@echo "Installing viruses..."
	gcc -o helloworldfunc helloworldfunc.o
	gcc -o helloworld helloworld.o

helloworld.o:
	gcc -c helloworld.c

helloworldfunc.o:
	gcc -c helloworldfunc.c

clean:
	@echo "You cannot remove these viruses. How dare you even try."
	rm -f helloworld helloworld.o helloworldfunc helloworldfunc.o