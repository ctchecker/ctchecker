/* strcasecmp.c - functions for case-insensitive string comparison. */

/* Copyright (C) 1995 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it under
   the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 2, or (at your option) any later
   version.

   Bash is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
   for more details.

   You should have received a copy of the GNU General Public License along
   with Bash; see the file COPYING.  If not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA */
   
#include <config.h>

#if !defined (HAVE_STRCASECMP)

#include <stdc.h>
#include <bashansi.h>
#include <ctype.h>

#if !defined (to_lower)
#  define to_lower(c) (islower(c) ? (c) : tolower(c))
#endif /* to_lower */

/* Compare at most COUNT characters from string1 to string2.  Case
   doesn't matter. */
int
strncasecmp (string1, string2, count)
     const char *string1;
     const char *string2;
     int count;
{
  register const char *s1;
  register const char *s2;
  register int r;

  if (count <= 0 || (string1 == string2))
    return 0;

  s1 = string1;
  s2 = string2;
  do
    {
      if ((r = to_lower (*s1) - to_lower (*s2)) != 0)
	return r;
      if (*s1++ == '\0')
	break;
      s2++;
    }
  while (--count != 0);

  return (0);
}

/* strcmp (), but caseless. */
int
strcasecmp (string1, string2)
     const char *string1;
     const char *string2;
{
  register const char *s1;
  register const char *s2;
  register int r;

  s1 = string1;
  s2 = string2;

  if (s1 == s2)
    return (0);

  while ((r = to_lower (*s1) - to_lower (*s2)) == 0)
    {
      if (*s1++ == '\0')
	return 0;
      s2++;
    }

  return (r);
}
#endif /* !HAVE_STRCASECMP */
