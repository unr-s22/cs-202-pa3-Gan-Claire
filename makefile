pa3: main.o account.o money.o
	g++ -o pa3 main.o account.o money.o

main.o: main.cpp account.h money.h
	g++ -c main.cpp

account.o: account.cpp account.h money.h
	g++ -c account.cpp

money.o: money.cpp money.h
	g++ -c money.cpp

clean:
	rm*.o pa3
