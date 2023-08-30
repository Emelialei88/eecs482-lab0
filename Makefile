CC=g++ -std=c++17

all: core_dump_demo forever static_demo1 static_demo2 static_demo3

core_dump_demo: core_dump_demo.cpp
	${CC} -g -o $@ $^ 

forever: forever.cpp
	${CC} -g -o $@ $^ 

static_demo1: static_demo1.cpp
	${CC} -g -o $@ $^ 

static_demo2: static_demo2.cpp
	${CC} -g -o $@ $^ 

static_demo3: static_demo3.cpp
	${CC} -g -o $@ $^