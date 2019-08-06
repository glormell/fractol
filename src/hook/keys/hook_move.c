#include "hook/keys/hook_move.h"

int    is_move(int key)
{
  return (key == K_ARW_L || key == K_ARW_R ||
          key == K_ARW_B || key == K_ARW_T);
}

int    move_hook(int key, t_frc *frc)
{
  if (key == K_ARW_L && frc->cvs)
    frc->cvs->t.x -= fabs(frc->cvs->max.r - frc->cvs->min.r) * 0.1;
  else if (key == K_ARW_R && frc->cvs)
    frc->cvs->t.x += fabs(frc->cvs->max.r - frc->cvs->min.r) * 0.1;
  else if (key == K_ARW_B && frc->cvs)
    frc->cvs->t.y += fabs(frc->cvs->max.i - frc->cvs->min.i) * 0.1;
  else if (key == K_ARW_T && frc->cvs)
    frc->cvs->t.y -= fabs(frc->cvs->max.i - frc->cvs->min.i) * 0.1;
  frc->cvs->draw(frc);
  return (1);
}
