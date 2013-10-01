CPP=g++
CPPFLAGS =	-O2 -g -Wall -fmessage-length=0
OBJS =		test5.o
LIBS =
TARGET =	test5.exe

$(TARGET):	$(OBJS)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
