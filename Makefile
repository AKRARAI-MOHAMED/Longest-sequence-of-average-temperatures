CXX ?= g++

main.out : main.cpp long_seq.cpp
	g++ -o main.out main.cpp long_seq.cpp
