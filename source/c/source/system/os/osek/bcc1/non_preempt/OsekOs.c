/**
 * MicroSAR - the open source AUTOSAR platform https://github.com/parai
 *
 * Copyright (C) 2014  MicroSAR <parai@foxmail.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */
/* ============================= [ INCLUDE ] ================================== */
#include "OsekOs.h"
#include "bitop.h"

/* ============================= [ FUNCTION ] ================================= */
PUBLIC STATIC void Init ( void )
{
	Bitop.Init();
}

PUBLIC STATIC void Start ( AppModeType app_mode )
{
	for (;;);
}

/* ============================= [ INTERFACE ] ================================ */
const OsekOs_Class OsekOs = {
	.Init  = Init,
	.Start = Start
};

