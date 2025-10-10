#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void    debug(void);
    void    warning(void);
    void    info(void);
    void    error(void);
};

#endif