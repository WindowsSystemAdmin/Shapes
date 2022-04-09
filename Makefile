all: main

CXX = g++
CXXFLAGS += -g -std=c++2a

SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cc' -print)
OBJS = $(SRCS:.cc=.o)
DEPS = $(SRCS:.cc=.d)

%.d: %.cc
	@set -e; rm -vf $@; \
	$(CXX) -MM $(CXXFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -vf $@.$$$$

include $(DEPS)

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main

rebuild-no-run:
	make clean
	make all

clean:
	rm -vf $(OBJS) $(DEPS) main

rebuild-run:
	make clean
	make all
	./main
