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

#include "Span.hpp"

Span::Span(): max(0)
{

}

Span::Span(unsigned int n): max(n)
{

}

Span::~Span()
{
    
}

int Span::difference(int a, int b)
{
    a = a - b;
    if (a < 0)
        a = -a;
    return (a);
}

int Span::shortestSpan()
{
    if (value.size() < 2)
		throw std::length_error("Exception: Not enough elements");
    int dif = __INT_MAX__;
    int r = 0; 
    for (size_t i = 0; i < size; i++)
    {
        int j = -1;
        while (++j < size)
        {
            if (i == j)
                continue;
            r = difference(value[i], value[j]);
            if (r < dif)
                dif = r;
        }
    }
    return (dif);
}



int Span::longestSpan()
{
    if (value.size() < 2)
		throw std::length_error("Exception: Not enough elements");
    int min = *std::min_element(value.begin(), value.end());
    int max =  *std::max_element(value.begin(), value.end());
    return (max - min);
}

void Span::addNumber(int n)
{
    if (size >= max)
        throw std::invalid_argument("Max list");
    size++;
    value.push_back(n);
}