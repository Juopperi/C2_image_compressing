CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2
LDFLAGS = 

# Source files
SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o) profiler.o 
TARGET = jpg2jpg

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean 