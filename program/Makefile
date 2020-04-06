CXX := g++
CXX_FLAGS := -Wall -Wextra -O3
CXX_INC := -I./inc/

ENTRY_POINT := main
ENTRY_OBJDIR := main/obj
BINDIR := bin
INCDIR := inc
SRCDIR := src
OBJDIR := src/obj

MAINS := $(wildcard $(ENTRY_POINT)/*.cpp)
MAIN_OBJ := $(subst $(ENTRY_POINT),$(ENTRY_OBJDIR),$(subst .cpp,.o,$(MAINS)))
SRCS  := $(wildcard $(SRCDIR)/*.cpp)
OBJS  := $(subst $(SRCDIR),$(OBJDIR),$(subst .cpp,.o,$(SRCS)))
PROGRAMS := $(subst $(ENTRY_POINT),$(BINDIR),$(subst .cpp,,$(wildcard $(ENTRY_POINT)/*.cpp)))

.POHNY: test clean

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXX_FLAGS) $(CXX_INC) -c -o $@ $<

$(ENTRY_OBJDIR)/%.o: $(ENTRY_POINT)/%.cpp
	$(CXX) $(CXX_FLAGS) $(CXX_INC) -c -o $@ $<

$(BINDIR)/%: $(ENTRY_OBJDIR)/%.o $(OBJS)
	$(CXX) $(CXX_FLAGS) -o $@ $^

all: $(MAIN_OBJ) $(OBJS)
	@for PROGRAM in $(PROGRAMS) ; do \
		make $$PROGRAM ; \
	done

config:
	@echo "Call Test"
	@echo "OBS=${OBJS}"
	@echo "PROGRAMS=${PROGRAMS}"

clean:
	@echo "Make clean ..."
	rm -f $(OBJS) $(MAIN_OBJ) $(PROGRAMS)



