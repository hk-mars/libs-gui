/* GSGrayColorPicker.h

   Copyright (C) 2001 Free Software Foundation, Inc.

   Author:  Fred Kiefer <FredKiefer@gmx.de>
   Date: January 2001
   Author: Alexander Malmberg <alexander@malmberg.org>
   Date: May 2002
   
   This file is part of GNUstep.
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include <Foundation/Foundation.h>
#include <AppKit/AppKit.h>

#include "GSStandardColorPicker.h"

@interface GSGrayColorPicker : GSStandardCSColorPicker
{
  NSString *r_names[1];
  NSSlider *r_sliders[1];
  NSTextField *r_fields[1];
  float r_values[1];
}

-(void) _setColorFromValues;
-(void) setColor:(NSColor *)color;

@end

