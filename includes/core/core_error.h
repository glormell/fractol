/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_error.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:53:29 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:53:30 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_ERROR_H
# define CORE_ERROR_H
# include <errno.h>
# include <stdlib.h>
# include <stdio.h>

void	xerror(int code, char *str);

#endif
