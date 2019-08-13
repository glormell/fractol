/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_random.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:04:05 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:05:24 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_KEYS_RANDOM_H
# define HOOK_KEYS_RANDOM_H
# include <stdlib.h>
# include <time.h>
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"

int		is_random_keys(int key);
int		random_keys_hook(t_frc *frc);

#endif
