/*********************************************************************
 *
 * Copyright (C) 2008,  Simon Kagstrom
 *
 * Filename:      FunctionColocation.hh
 * Author:        Simon Kagstrom <simon.kagstrom@gmail.com>
 * Description:   Function coloc class
 *
 * $Id:$
 *
 ********************************************************************/
#ifndef __FUNCTIONCOLOCATION_HH__
#define __FUNCTIONCOLOCATION_HH__

#include <ght_hash_table.h>

#include "function.hh"
#include "javamethod.hh"

class FunctionColocation
{
public:
  FunctionColocation(const char *str);

  void addFunction(Function *fn);

  JavaMethod *createJavaMethod();

  static FunctionColocation *lookup(const char *fn_name);

private:
  static ght_hash_table_t *name_to_coloc;

  Function **fns;
  const char **fn_names;
  const char *in_str;
  int n_fns;
};

#endif /* !__FUNCTIONCOLOCATION_HH__ */
