CXX ?= g++
CXXFLAGS = -std=c++14 -DLINUX -O2 -Wall -I../engine
ENGINE_DIR = ../engine

ENGINE_SRCS = \
	$(ENGINE_DIR)/Engine.cpp \
	$(ENGINE_DIR)/Vietnamese.cpp \
	$(ENGINE_DIR)/Macro.cpp \
	$(ENGINE_DIR)/SmartSwitchKey.cpp \
	$(ENGINE_DIR)/ConvertTool.cpp

OBJS = $(ENGINE_SRCS:.cpp=.o) globals.o vnkey_cli.o

.PHONY: all clean

all: vnkey-cli

vnkey-cli: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

$(ENGINE_DIR)/%.o: $(ENGINE_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

globals.o: globals.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

vnkey_cli.o: vnkey_cli.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f vnkey-cli $(ENGINE_DIR)/*.o globals.o vnkey_cli.o
