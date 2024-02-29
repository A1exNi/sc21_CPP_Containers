CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++17
GCOVFLAGS= -fprofile-arcs -ftest-coverage -std=c++17
OS= $(shell uname -s)
TEST=test.cc
TEST_FILES := $(wildcard */test_s21_*.cc)
HEADER_FILES := $(wildcard */*.h)
REPORT=GCOVreport

ifeq ($(OS), Linux)
  CFLAGS+= -D OS_LINUX
  GTESTFLAGS= -lgtest -pthread -lpthread -lm
endif
ifeq ($(OS), Darwin)
  CFLAGS+= -D OS_MAC
  GTESTFLAGS= -lgtest
endif

all: style test

test:
	@$(CC) $(CFLAGS) $(TEST_FILES) $(TEST) $(GTESTFLAGS) -g -o test
	@./test

gcov_report: test
	@$(CC) $(GCOVFLAGS) $(TEST) $(TEST_FILES) $(GTESTFLAGS) -o $(REPORT)
	@chmod +x $(REPORT)
	@./$(REPORT)
	@lcov --no-external -t "$(REPORT)" -o $(REPORT).info -c -d .
	@genhtml -o report $(REPORT).info
	@rm -rf ./*.gcno ./*.gcda ./$(REPORT).*
	@open ./report/index.html
	@rm $(REPORT)
	@rm -rf *.dSYM

style:
	@cp ../materials/linters/.clang-format ./
	@clang-format -n $(HEADER_FILES) --verbose
	@rm .clang-format

cppcheck:
	@cppcheck --enable=all --suppress=missingIncludeSystem --language=c++ $(HEADER_FILES)

leaks: test
	@valgrind --leak-check=yes ./test

clean:
	@rm -f test GCOVreport 2> /dev/null
	@rm -rf report 2> /dev/null
	@rm -rf test.dSYM

rebuild: clean test