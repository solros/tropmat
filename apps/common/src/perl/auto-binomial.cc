/* Copyright (c) 1997-2010
   Ewgenij Gawrilow, Michael Joswig (Technische Universitaet Darmstadt, Germany)
   http://www.polymake.org

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version: http://www.gnu.org/licenses/gpl.txt.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
--------------------------------------------------------------------------------
   $Project: polymake $$Id: bindings.cc 9716 2010-06-28 22:22:03Z gawrilow $
*/

///==== this line controls the automatic file splitting: max.instances=40

#include "polymake/client.h"
#include "polymake/Integer.h"
namespace polymake { namespace common { namespace {
///==== Automatically generated contents follow.    Please do not delete this line. ====
   template <typename T0>
   FunctionInterface4perl( binomial_X_x, T0 ) {
      perl::Value arg0(stack[0]), arg1(stack[1]);
      WrapperReturn( Integer::binom(arg0.get<T0>(), arg1) );
   };

   FunctionInstance4perl(binomial_X_x, int);
///==== Automatically generated contents end here.  Please do not delete this line. ====
} } }
