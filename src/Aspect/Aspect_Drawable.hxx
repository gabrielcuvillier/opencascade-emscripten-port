// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

/*============================================================================*/
/*==== Titre: Aspect_Drawable.hxx                                               */
/*==== Role : The header file of primitive type "Handle" from packages        */
/*==== "Xw" & "WNT"                                                           */
/*==== Implementation:  This is a primitive type implemented with typedef     */
/*============================================================================*/
// To manage Drawable

#ifndef _Aspect_Drawable_HeaderFile
#define _Aspect_Drawable_HeaderFile

#ifdef WNT
 typedef void*        Aspect_Drawable;	/* HDC under WNT */
#elif defined(__EMSCRIPTEN__)
 typedef const char*  Aspect_Drawable;  /* Target Canvas under Emscripten */
#else
 typedef unsigned long Aspect_Drawable;	/* Window or Pixmap under UNIX */
#endif /* WNT */

#endif /* _Aspect_Drawable_HeaderFile */
