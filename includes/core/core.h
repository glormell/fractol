/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:53:16 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:53:17 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H
# include "mlx.h"
# include "libft.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_window.h"
# include "hook/hook.h"
# include "draw/draw.h"

t_frc	*p_frc(void *mlx, int *win_count, char *type);

#endif
