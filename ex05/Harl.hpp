#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
    private:
        void    debug(void);
        void    warning(void);
        void    info(void);
        void    error(void);

    public:
        void    complain(std::string level);
};

#endif