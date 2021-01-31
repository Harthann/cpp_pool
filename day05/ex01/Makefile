NAME= a.out

SRCS= main.cpp

CLASSES= Bureaucrat Form
CLASSES_SRCS= $(CLASSES:=.cpp)
CLASSES_HEADERS= $(CLASSES:=.hpp)

ALL_SRCS= $(CLASSES_SRCS) $(SRCS)
OBJS= $(ALL_SRCS:%.cpp=%.o)

CXX= clang++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
INC_DIR=.
$(NAME): all

all: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -I$(INC_DIR) -o $(NAME)

print:
	@echo $(CLASSES_SRCS) $(CLASSES_HEADERS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -I$(INC_DIR) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
