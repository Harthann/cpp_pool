NAME = annuaire

SRCS = main.cpp index.cpp annuaire.cpp

OBJS = $(SRCS:%.cpp=%.o)

INC = index.hpp annuaire.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	clang++ $(OBJS) -I . -o $(NAME)

%.o : %.cpp
	clang++ -c $< -I .

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all