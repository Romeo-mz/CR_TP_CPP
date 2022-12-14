# Makefile with dependencies management (Q4)

CXX        = g++
CXXFLAGS   = -Wall -Wextra 
DEPFLAGS   = -MMD
LDFLAGS    =
SRCS       = date.cpp main_Le_R.cpp book.cpp reader.cpp author.cpp borrow.cpp
OBJS       = $(SRCS:.cpp=.o)
TARGET     = app
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)