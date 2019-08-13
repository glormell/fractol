/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_window.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:53:43 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:53:43 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_WINDOW_H
# define CORE_WINDOW_H
# include "mlx.h"
# include "core/t_frc.h"

int		win_init(t_frc *frc, int width, int height, char *title);

#endif
