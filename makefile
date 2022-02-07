output: Printer_StatePattern.o Printer.o State.o ReadyToPrint_State.o Idle_State.o
		g++ Printer_StatePattern.o Printer.o State.o ReadyToPrint_State.o Idle_State.o  -o output
			
Printer_StatePattern.o: Printer_StatePattern.cpp
		g++ -c Printer_StatePattern.cpp
			
Printer.o: Printer.cpp Printer.h
		g++ -c Printer.cpp

State.o: State.cpp State.h
		g++ -c State.cpp

ReadyToPrint_State.o: ReadyToPrint_State.cpp ReadyToPrint_State.h
		g++ -c ReadyToPrint_State.cpp

Idle_State.o: Idle_State.cpp Idle_State.h
		g++ -c Idle_State.cpp
			
clean: 
		rm *.o output
