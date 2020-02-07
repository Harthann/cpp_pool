NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	clang++ $(OBJS) -o $(NAME)

%.o : %.cpp
	clang++ -c $<

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all