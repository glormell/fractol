#include "hook/keys/hook_keys_move.h"

int    is_move_keys(int key)
{
  return (key == K_ARW_L || key == K_ARW_R ||
          key == K_ARW_B || key == K_ARW_T);
}

int    move_keys_hook(int key, t_frc *frc)
{
  if (key == K_ARW_L && frc->cvs)
    left_hook(frc);
  else if (key == K_ARW_R && frc->cvs)
    right_hook(frc);
  else if (key == K_ARW_B && frc->cvs)
    bottom_hook(frc);
  else if (key == K_ARW_T && frc->cvs)
    top_hook(frc);
  return (1);
}
