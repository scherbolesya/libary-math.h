# ASAN = -fsanitize=address
CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11 -pedantic
GCOV_FLAGS=-fprofile-arcs -ftest-coverage
CHECK_FLAGS=-lcheck
ALL_FLAGS=$(CFLAGS) $(GCOV_FLAGS) $(CHECK_FLAGS)
SRCS =  s21_abs.c \
		s21_acos.c \
		s21_asin.c \
		s21_atan.c \
		s21_ceil.c \
		s21_cos.c \
		s21_exp.c \
		s21_fabs.c \
		s21_floor.c \
		s21_fmod.c \
		s21_log.c \
		s21_pow.c \
		s21_sin.c \
		s21_sqrt.c \
		s21_tan.c 
		
OBJS = $(SRCS:.c=.o) s21_math_tests.c
OBJST = $(SRCS:.c=.o)
NAME = test
REPORT_NAME = report

all: objs s21_math.a

objs: $(SRCS)
	$(CC) $(CFLAGS) $(ASAN) -c $(SRCS)

test: $(OBJS)
	$(CC) $(CHECK_FLAGS) $(ASAN) $(OBJS) -o $(NAME)
	make clean

s21_math.a: objs
	ar rc s21_math.a $(OBJST)
	ranlib s21_math.a

gcov_report:
	$(CC) -o $(NAME) $(SRCS) s21_math_tests.c $(GCOV_FLAGS) $(CHECK_FLAGS)
	./$(NAME)
	lcov -t "gcov_report" -o s21_math_tests.info -c -d .
	genhtml -o $(REPORT_NAME) s21_math_tests.info
	rm $(NAME)
	make clean

clean_all:
	rm -rf $(OBJST)
	rm -rf *.o
	rm -rf *.gcno
	rm -rf *.gcda
	rm -rf *.info
	rm -rf *.a
	rm -rf $(REPORT_NAME)
	rm $(NAME)

clean:
	rm -rf $(OBJST)
	rm -rf *.o
	rm -rf *.gcno
	rm -rf *.gcda
	rm -rf *.info

check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.h *.c
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extension=c *.c *.h
	CK_FORK=no leaks --atExit -- ./test
