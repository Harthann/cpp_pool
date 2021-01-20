NAME= a.out

SRCS= main.cpp

CLASSES_SRCS= HumanA.cpp HumanB.cpp Weapon.cpp
CLASSES_HEADERS= $(CLASSES_SRCS:%.cpp=%.hpp)

ALL_SRCS= $(CLASSES_SRCS) $(SRCS)
OBJS= $(ALL_SRCS:%.cpp=%.o)

CXX= clang++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
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
