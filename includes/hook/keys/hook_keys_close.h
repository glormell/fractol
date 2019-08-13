/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_close.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:03:39 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:03:42 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_KEYS_CLOSE_H
# define HOOK_KEYS_CLOSE_H
# include <stdlib.h>
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"

int		is_close_keys(int key);
int		close_keys_hook(t_frc *frc);

#endif
