#include "core/core_complex.h"

t_complex    *p_complex(double r, double i)
{
  t_complex  *complex;
  
  if (!(complex = (t_complex *)ft_memalloc(sizeof(t_complex))))
    return (NULL);
  complex->r = r;
  complex->i = i;
  return (complex);
}

t_complex    complex(double r, double i)
{
  return (t_complex){ r, i };
}
