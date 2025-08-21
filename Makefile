all: pointers main functions challenge classes encap

pointers: pointers.cpp
	g++ pointers.cpp -o pointers

functions: functions.cpp
	g++ functions.cpp -o functions

challenge: challenge.cpp
	g++ challenge.cpp -o challenge

classes: classes.cpp
	g++ classes.cpp -o classes

encap: encap.cpp
	g++ encap.cpp -o encap

main: main.cpp
	g++ main.cpp -o main