HEADER = de.h
TARGET = lshade_exe

OBJS := $(patsubst %.cc,%.o,$(wildcard *.cc))
CC = g++ -std=c++11
OPTION = -O3

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(OPTION) -lm 

%.o: %.cc $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o
