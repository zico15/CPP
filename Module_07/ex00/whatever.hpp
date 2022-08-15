/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:16:04 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/12 16:24:27 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

template <class T> void swap ( T& a, T& b )
{
  T c(a); a=b; b=c;
}

template <class T> T min ( T& a, T& b )
{
    //int ai = (int) a;
    //int bi = (int) b;
    if (a <= b)
        return (a);
  return (b);
}

template <class T> T max ( T& a, T& b )
{
    if (a >= b)
        return (a);
    return (b);
}

#endif