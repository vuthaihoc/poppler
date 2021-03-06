/*
 * Copyright (C) 2005, 2019, Albert Astals Cid <aacid@kde.org>
 * Copyright (C) 2019 Oliver Sander <oliver.sander@tu-dresden.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _POPPLER_PAGE_TRANSITION_PRIVATE_H_
#define _POPPLER_PAGE_TRANSITION_PRIVATE_H_

class Object;

namespace Poppler {

class PageTransitionParams {
  public:
    Object *dictObj;
};

}

#endif
