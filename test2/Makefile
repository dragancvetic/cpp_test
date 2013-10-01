CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		test2.o

LIBS =

TARGET =	test2.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
