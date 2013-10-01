CPP=g++
CPPFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		test4.o

LIBS =

TARGET =	test4.exe

$(TARGET):	$(OBJS)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
