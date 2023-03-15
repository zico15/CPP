/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:10:46 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/14 16:36:12 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    is_result = false;
    result = 0;
}

RPN::~RPN()
{
    
}

bool RPN::is_operations(char c)
{
    switch (c) {
        case '+':
            return (true);
        case '-':
            return (true);
        case '/':
            return (true);
        case '*':
            return (true);
    }
    return (false);
}

void RPN::error(){
    std::cout << "Error\n";
    exit(0);
}

int RPN::cal()
{
    long     n1;
    char     op;
    long     n2;
    char     c[2] = {0,0};

    // n1
    c[0] = *data.begin();
    if (!std::isdigit(*data.begin()))
        error();
    n1 = std::strtol(c , 0, 10);
    if (is_result)
        n1 = result;
    data.erase(data.begin());
    // operations
    if (!is_operations(*data.begin()))
        error();
    op = *data.begin();
    data.erase(data.begin());
    // n2
    if (!std::isdigit(*data.begin()))
        error();
    c[0] = *data.begin();
    n2 = std::strtol(c , 0, 10);
    //std::cout << "n1: " << n1 << " op: " << op << " n2: " << n2 << "\n";
    if (op == '+')
        result = n1 + n2;
    else if (op == '-')
        result = n1 - n2;
    else if (op == '/')
        result = n1 / n2;
    else if (op == '*')
        result = n1 * n2;
    is_result = true;
    return (result);

}

int RPN::calculate()
{
    while (data.size() > 2)
    {
        cal();
    }
    return (result);
}

void RPN::print_list(){


   std::vector<char>::iterator ptr;
    for(ptr = data.begin(); ptr != data.end(); ++ptr) {
        std::cout << "n: (" <<  *ptr << ")\n";
    }
}

void RPN::load(std::string arg)
{
    std::string n = "";

    for (int i = 0; i < arg.size(); i++) {
        if (!std::isdigit(arg[i]) && !std::isspace(arg[i]) && !is_operations(arg[i]))
            error();
        else if (std::isspace(arg[i]) || !arg[i + 1])
        {
            if (!arg[i + 1])
                n += arg[i];
            if (!n.empty()) {

                if (n.size() > 1)
                    error();
                if (is_operations(n[0])) {
                    if (this->data.empty())
                        error();
                    this->data.insert(this->data.end() - 1, n[0]);
                }
                 else
                    this->data.push_back(n[0]);
            }
            n = "";
        }
        else
            n += arg[i];
    }
    if (this->data.size() < 2)
        error();
}