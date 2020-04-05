CXX := g++
CXX_FLAGS := -Wall -Wextra -O3
CXX_INC := -I./inc/

BINDIR := bin
INCDIR := inc
SRCDIR := src
OBJDIR := obj

SRCS  := $(wildcard $(SRCDIR)/*.cpp)
MAINS := $(wildcard $(ENTRY_POINT)/*.cpp)
OBJS  := $(subst $(SRCDIR),$(OBJDIR),$(subst .cpp,.o,$(SRCS)))
PROGRAMS := $(wildcard $(ENTRY_POINT)/*.cpp)
EXECS := $(subst $(ENTRY_POINT),$(BINDIR),$(subst .cpp,,$(PROGRAMS)))

.POHNY: test clean

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	echo "aaa"
	$(CXX) $(CXX_FLAGS) $(CXX_INC) -c -o $@ $<

$(BINDIR)/%: $(OBJDIR)/%.o $(OBJS)
	echo "bbb"
	$(CXX) $(CXX_FLAGS) $(CXX_INC) -o $@ $<

# $(BINDIR)/hello: $(OBJDIR)/hello.o $(OBJS)
# 	echo "bbb"
# 	$(CXX) $(CXX_FLAGS) $(CXX_INC) -o $@ $<



hello: $(OBJ)
	$(CXX)

test:
	@echo "Call Test"
	@echo "OBS=${OBJS}"
	@echo "PROGRAMS=${PROGRAMS}"
	@echo "EXECS=${EXECS}"

clean:
	rm $(OBJS) $(EXECS)
	@echo "Make clean ..."


