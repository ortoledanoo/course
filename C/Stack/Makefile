OBJs = stack_main.o stack_functions.o

stack: stack_main.o stack_functions.o
	@echo "Make Final Program"
	gcc stack_main.o stack_functions.o -o Stack

stack_main.o: stack_main.c
	@echo "Compile stack_main.c"
	gcc -c stack_main.c

stack_functions.o: stack_functions.c
	@echo "Compile stack_functions.c"
	gcc -c stack_functions.c

.PHONY: clean
clean:
	@echo "Removing .o Files"
	@rm stack_main.o stack_functions.o

run:
	@echo "Running The Program..."
	@./Stack
