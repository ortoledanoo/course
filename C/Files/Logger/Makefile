Logger: Logger_Main.o Logger_Functions.o
	@echo "Make Final Program"
	gcc Logger_Main.o Logger_Functions.o -o Logger

Logger_Main.o: Logger_Main.c
	@echo "Compile main.c"
	gcc -c Logger_Main.c

Logger_Functions.o: Logger_Functions.c
	@echo "Compile functions.c"
	gcc -c Logger_Functions.c

clean:
	@echo "Removing .o Files"
	rm Logger_Functions.o Logger_Main.o
