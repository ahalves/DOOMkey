// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// $Log:$
//
// DESCRIPTION:
//	Globally defined strings.
// 
//-----------------------------------------------------------------------------

static const char
rcsid[] = "$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $";


#ifdef __GNUG__
#pragma implementation "dstrings.h"
#endif
#include "dstrings.h"



char* endmsg[NUM_QUITMESSAGES+1]=
{
  // DOOM1
  QUITMSG,
  "nice try, fucker\ni wont reset your password for you",
  "you think you can find\n an exploit or something?",
  "uhh yeah so you cant reset your password",
  "twat",
  "try me, bitch",
  "you should be ashamed with yourself",
  "go ahead and leave. see if i care.",

  // QuitDOOM II messages
  "nice try, fucker\ni wont reset your password for you",
  "you think you can find\n an exploit or something?",
  "uhh yeah so you cant reset your password",
  "twat",
  "try me, bitch",
  "you should be ashamed with yourself",
  "go ahead and leave. see if i care.",

  // FinalDOOM?
  "nice try, fucker\ni wont reset your password for you",
  "you think you can find\n an exploit or something?",
  "uhh yeah so you cant reset your password ",
  "twat",
  "try me, bitch",
  "you should be ashamed with yourself",
  "go ahead and leave. see if i care.",

  // Internal debug. Different style, too.
  "this message is a 1/22 chance\nare you proud yet?"
};


  


