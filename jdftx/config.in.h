/*-------------------------------------------------------------------
Copyright 2011 Ravishankar Sundararaman

This file is part of JDFTx.

JDFTx is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

JDFTx is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with JDFTx.  If not, see <http://www.gnu.org/licenses/>.
-------------------------------------------------------------------*/

#ifndef JDFTX_CONFIG_H
#define JDFTX_CONFIG_H

//Configuration definitions processed by Cmake
//	Do not edit config.h, it is generated by Cmake
//	Edit config.in.h instead

#define PACKAGE_NAME "${CPACK_PACKAGE_NAME}"
#define PACKAGE_DESCRIPTION "${CPACK_PACKAGE_DESCRIPTION}"
#define PACKAGE_SUMMARY "${CPACK_PACKAGE_DESCRIPTION_SUMMARY}"
#define VERSION_MAJOR_MINOR_PATCH "${VERSION_STRING}"
#define VERSION_SVN_REVISION "${SUBVERSION_REVISION}"
#define JDFTX_BUILD_DIR "${CMAKE_BINARY_DIR}"

#endif // JDFTX_CONFIG_H
