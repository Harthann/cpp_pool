NAME= a.out

SRCS= ex01.cpp

ALL_SRCS= $(SRCS)
OBJS= $(ALL_SRCS:%.cpp=%.o)

CXX= clang++
CXXFLAGS= -Wall -Werror -Wextra
INC_DIR=.
$(NAME): all

all: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -I$(INC_DIR) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -I$(INC_DIR) $< -o $@

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
