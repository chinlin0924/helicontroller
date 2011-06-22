all: Controller.cpp main.cpp
	g++ -o test main.cpp Controller.cpp -lusb-1.0
