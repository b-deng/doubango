/*
* Copyright (C) 2010-2011 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tcomp_rfc3485_dictionary_sip.h
 * @brief RFC 3485 - The Session Initiation Protocol (SIP) and Session Description Protocol
 *  (SDP) Static Dictionary for Signaling Compression (SigComp)
 *
 * @author Mamadou Diop <diopmamadou(at)yahoo.fr>
 *

 */

#ifndef _TINYSIGCOMPP_RFC5112_H_
#define _TINYSIGCOMPP_RFC5112_H_

TCOMP_BEGIN_DECLS

#define RFC5112_DICTIONARY_PRESENCE_VALUE_LENGTH			0x0d93
#define RFC5112_DICTIONARY_PRESENCE_STATE_ADDRESS			0 /*(not relevant for the dictionary) */
#define RFC5112_DICTIONARY_PRESENCE_STATE_INSTRUCTION       0 /*(not relevant for the dictionary) */
#define RFC5112_DICTIONARY_PRESENCE_MINIMUM_ACCESS_LENGTH   6

#define RFC5112_DICTIONARY_PRESENCE_IDENTIFIER_LENGTH		20

#define RFC5112_DICTIONARY_PRESENCE_IDENTIFIER \
	"\xd9\x42\x29\x7d\x0b\xb3\x8f\xc0\x1d\x67\x41\xd6\xb3\xb4\x81\x57\xac\x8e\x1b\xe0"

#define RFC5112_DICTIONARY_PRESENCE_VALUE \
	"\x63\x6f\x6e\x76\x65\x6e\x74\x69\x6f\x6e\x2d\x63\x65\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74" \
	"\x65\x64\x65\x70\x72\x65\x73\x73\x65\x64\x69\x73\x67\x75\x73\x74\x65\x64\x69\x6e\x64\x75" \
	"\x73\x74\x72\x69\x61\x6c\x61\x73\x74\x2d\x69\x6e\x70\x75\x74\x3d\x68\x75\x6d\x69\x6c\x69" \
	"\x61\x74\x65\x64\x6f\x6d\x61\x69\x6e\x3d\x61\x75\x74\x6f\x6d\x6f\x62\x69\x6c\x65\x63\x75" \
	"\x72\x69\x6f\x75\x73\x70\x69\x72\x69\x74\x73\x2d\x49\x4e\x44\x50\x73\x65\x6e\x64\x2d\x6f" \
	"\x6e\x6c\x79\x70\x61\x74\x68\x65\x61\x74\x65\x72\x65\x73\x74\x6c\x65\x73\x73\x6c\x65\x65" \
	"\x70\x79\x69\x6e\x2d\x70\x65\x72\x73\x6f\x6e\x61\x6c\x6f\x6e\x65\x6c\x79\x70\x6c\x61\x79" \
	"\x66\x75\x6c\x6f\x77\x65\x72\x74\x68\x61\x6e\x6e\x6f\x79\x65\x64\x75\x6e\x63\x6f\x6d\x66" \
	"\x6f\x72\x74\x61\x62\x6c\x65\x78\x63\x6c\x75\x64\x65\x3d\x63\x6f\x6e\x66\x75\x73\x65\x64" \
	"\x76\x61\x63\x61\x74\x69\x6f\x6e\x63\x6c\x75\x62\x75\x73\x2d\x73\x74\x61\x74\x69\x6f\x6e" \
	"\x61\x69\x72\x63\x72\x61\x66\x74\x68\x69\x72\x73\x74\x79\x63\x6f\x75\x72\x69\x65\x72\x65" \
	"\x6a\x65\x63\x74\x65\x64\x68\x69\x73\x74\x69\x6e\x66\x6f\x66\x66\x69\x63\x65\x72\x65\x6d" \
	"\x6f\x76\x65\x3d\x61\x72\x65\x6e\x61\x62\x6c\x65\x64\x3d\x52\x45\x46\x45\x52\x45\x47\x49" \
	"\x53\x54\x45\x52\x77\x61\x69\x74\x69\x6e\x67\x72\x75\x6d\x70\x79\x70\x72\x65\x66\x69\x78" \
	"\x3d\x68\x61\x6c\x66\x72\x65\x69\x67\x68\x74\x6d\x65\x61\x6e\x67\x72\x79\x53\x55\x42\x53" \
	"\x43\x52\x49\x42\x45\x70\x72\x6f\x76\x61\x74\x69\x6f\x6e\x69\x6e\x63\x6c\x75\x64\x65\x3d" \
	"\x61\x70\x70\x72\x6f\x76\x65\x64\x68\x6f\x6c\x69\x64\x61\x79\x75\x6e\x6b\x6e\x6f\x77\x6e" \
	"\x70\x61\x72\x6b\x69\x6e\x67\x4d\x45\x53\x53\x41\x47\x45\x77\x6f\x72\x72\x69\x65\x64\x68" \
	"\x75\x6d\x62\x6c\x65\x64\x61\x69\x72\x70\x6f\x72\x74\x61\x73\x68\x61\x6d\x65\x64\x70\x6c" \
	"\x61\x79\x69\x6e\x67\x50\x55\x42\x4c\x49\x53\x48\x68\x75\x6e\x67\x72\x79\x63\x72\x61\x6e" \
	"\x6b\x79\x61\x6d\x61\x7a\x65\x64\x61\x66\x72\x61\x69\x64\x55\x50\x44\x41\x54\x45\x4e\x4f" \
	"\x54\x49\x46\x59\x49\x4e\x56\x49\x54\x45\x43\x41\x4e\x43\x45\x4c\x66\x72\x69\x65\x6e\x64" \
	"\x70\x6f\x73\x74\x61\x6c\x66\x61\x6d\x69\x6c\x79\x70\x72\x69\x73\x6f\x6e\x69\x6e\x5f\x61" \
	"\x77\x65\x62\x72\x61\x76\x65\x71\x75\x69\x65\x74\x62\x6f\x72\x65\x64\x50\x52\x41\x43\x4b" \
	"\x70\x72\x6f\x75\x64\x66\x69\x78\x65\x64\x68\x6f\x74\x65\x6c\x68\x61\x70\x70\x79\x63\x61" \
	"\x66\x65\x63\x69\x64\x3d\x62\x61\x6e\x6b\x6d\x69\x6e\x3d\x61\x77\x61\x79\x6d\x61\x78\x3d" \
	"\x6d\x65\x61\x6c\x62\x75\x73\x79\x77\x6f\x72\x6b\x75\x72\x6e\x3d\x63\x6f\x6c\x64\x68\x75" \
	"\x72\x74\x6a\x65\x61\x6c\x6f\x75\x73\x70\x69\x72\x69\x74\x73\x2d\x75\x73\x65\x72\x2d\x70" \
	"\x72\x6f\x67\x6f\x76\x65\x72\x6e\x6d\x65\x6e\x74\x72\x61\x69\x6e\x2d\x73\x74\x61\x74\x69" \
	"\x6f\x6e\x6f\x72\x65\x66\x65\x72\x73\x75\x62\x73\x63\x72\x69\x62\x65\x66\x6f\x72\x65\x74" \
	"\x72\x61\x6e\x73\x6d\x69\x73\x73\x69\x6f\x6e\x2d\x61\x6c\x6c\x6f\x77\x65\x64\x75\x72\x61" \
	"\x74\x69\x6f\x6e\x2d\x73\x75\x62\x73\x63\x72\x69\x62\x65\x64\x3d\x68\x69\x67\x68\x65\x72" \
	"\x74\x68\x61\x6e\x78\x69\x6f\x75\x73\x65\x72\x76\x69\x63\x65\x2d\x64\x65\x73\x63\x72\x69" \
	"\x70\x74\x69\x6f\x6e\x3d\x62\x72\x65\x61\x6b\x66\x61\x73\x74\x61\x64\x69\x75\x6d\x73\x67" \
	"\x2d\x74\x61\x6b\x65\x72\x65\x6d\x6f\x72\x73\x65\x66\x75\x6c\x6c\x3a\x63\x69\x76\x69\x63" \
	"\x4c\x6f\x63\x6f\x6e\x66\x65\x72\x65\x6e\x63\x65\x71\x75\x61\x6c\x73\x74\x72\x65\x73\x73" \
	"\x65\x64\x77\x61\x74\x65\x72\x63\x72\x61\x66\x74\x65\x72\x61\x6e\x67\x65\x3a\x62\x61\x73" \
	"\x69\x63\x50\x6f\x6c\x69\x63\x79\x63\x6c\x65\x63\x6f\x75\x6e\x74\x72\x79\x63\x68\x61\x6e" \
	"\x67\x65\x64\x75\x6e\x74\x69\x6c\x3d\x61\x64\x64\x65\x64\x75\x72\x69\x3d\x77\x68\x61\x74" \
	"\x70\x65\x72\x6d\x61\x6e\x65\x6e\x74\x2d\x61\x62\x73\x65\x6e\x63\x65\x6d\x62\x61\x72\x72" \
	"\x61\x73\x73\x65\x64\x65\x61\x63\x74\x69\x76\x61\x74\x65\x64\x69\x73\x74\x72\x61\x63\x74" \
	"\x65\x64\x69\x6e\x6e\x65\x72\x76\x6f\x75\x73\x65\x6c\x66\x69\x6c\x74\x65\x72\x65\x6c\x69" \
	"\x65\x76\x65\x64\x66\x6c\x69\x72\x74\x61\x74\x69\x6f\x75\x73\x61\x67\x65\x2d\x72\x75\x6c" \
	"\x65\x73\x65\x72\x76\x63\x61\x70\x73\x70\x68\x65\x72\x65\x67\x69\x73\x74\x72\x61\x74\x69" \
	"\x6f\x6e\x2d\x73\x74\x61\x74\x65\x3d\x62\x61\x72\x72\x69\x6e\x67\x2d\x73\x74\x61\x74\x65" \
	"\x78\x74\x65\x72\x6e\x61\x6c\x2d\x72\x75\x6c\x65\x73\x65\x74\x69\x6d\x65\x2d\x6f\x66\x66" \
	"\x73\x65\x74\x64\x69\x61\x6c\x6f\x67\x69\x6e\x5f\x6c\x6f\x76\x65\x72\x72\x69\x64\x69\x6e" \
	"\x67\x2d\x77\x69\x6c\x6c\x69\x6e\x67\x6e\x65\x73\x73\x70\x65\x63\x74\x61\x74\x6f\x72\x65" \
	"\x73\x69\x64\x65\x6e\x63\x65\x76\x65\x6e\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x73\x75\x70" \
	"\x65\x72\x76\x69\x73\x6f\x72\x65\x73\x74\x61\x75\x72\x61\x6e\x74\x72\x75\x63\x6b\x70\x6c" \
	"\x6d\x6f\x62\x69\x6c\x69\x74\x79\x6a\x6f\x69\x6e\x61\x70\x70\x72\x6f\x70\x72\x69\x61\x74" \
	"\x65\x76\x65\x6e\x74\x6c\x69\x73\x74\x65\x65\x72\x69\x6e\x67\x69\x76\x65\x75\x70\x72\x69" \
	"\x6e\x63\x69\x70\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x73\x63\x68\x65\x6d\x65\x73\x73\x61" \
	"\x67\x65\x2d\x73\x75\x6d\x6d\x61\x72\x79\x70\x6c\x61\x63\x65\x2d\x6f\x66\x2d\x77\x6f\x72" \
	"\x73\x68\x69\x70\x6c\x61\x63\x65\x2d\x74\x79\x70\x65\x3d\x3a\x74\x69\x6d\x65\x64\x2d\x73" \
	"\x74\x61\x74\x75\x73\x2d\x69\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x65\x75\x74" \
	"\x72\x61\x6c\x49\x4e\x46\x4f\x50\x54\x49\x4f\x4e\x53\x69\x65\x6d\x65\x6e\x73\x2d\x52\x54" \
	"\x50\x2d\x53\x74\x61\x74\x73\x65\x72\x76\x69\x63\x65\x2d\x69\x64\x6c\x65\x2d\x74\x68\x72" \
	"\x65\x73\x68\x6f\x6c\x64\x3d\x70\x75\x62\x6c\x69\x63\x2d\x74\x72\x61\x6e\x73\x70\x6f\x72" \
	"\x74\x6f\x6f\x62\x72\x69\x67\x68\x74\x72\x69\x67\x67\x65\x72\x65\x73\x6f\x75\x72\x63\x65" \
	"\x3d\x3a\x67\x65\x6f\x70\x72\x69\x76\x31\x30\x30\x72\x65\x6c\x61\x74\x69\x6f\x6e\x73\x68" \
	"\x69\x70\x6f\x63\x2d\x73\x65\x74\x74\x69\x6e\x67\x73\x75\x72\x70\x72\x69\x73\x65\x64\x61" \
	"\x72\x6b\x75\x72\x6e\x3a\x6f\x6d\x61\x3a\x78\x6d\x6c\x3a\x70\x72\x73\x3a\x70\x69\x64\x66" \
	"\x3a\x6f\x6d\x61\x2d\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e\x6f\x69\x73\x79\x3a" \
	"\x73\x69\x6d\x70\x6c\x65\x2d\x66\x69\x6c\x74\x65\x72\x2d\x73\x65\x74\x69\x6d\x65\x6f\x75" \
	"\x74\x64\x6f\x6f\x72\x73\x63\x68\x6f\x6f\x6c\x70\x61\x72\x74\x69\x61\x6c\x6f\x63\x61\x74" \
	"\x69\x6f\x6e\x2d\x69\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\x61\x6d\x65\x65\x74\x69\x6e" \
	"\x67\x63\x61\x6c\x6d\x65\x74\x68\x6f\x64\x73\x74\x6f\x72\x65\x74\x65\x6e\x74\x69\x6f\x6e" \
	"\x2d\x65\x78\x70\x69\x72\x79\x3a\x77\x61\x74\x63\x68\x65\x72\x69\x6e\x66\x6f\x66\x66\x65" \
	"\x6e\x64\x65\x64\x63\x6f\x6e\x74\x72\x6f\x6c\x6f\x6f\x6b\x69\x6e\x67\x2d\x66\x6f\x72\x2d" \
	"\x77\x6f\x72\x6b\x69\x6e\x67\x77\x61\x74\x63\x68\x65\x72\x2d\x6c\x69\x73\x74\x72\x65\x65" \
	"\x74\x70\x6c\x61\x63\x65\x2d\x69\x73\x66\x6f\x63\x75\x73\x6f\x75\x6e\x64\x65\x72\x77\x61" \
	"\x79\x68\x6f\x6d\x65\x70\x61\x67\x65\x70\x72\x69\x76\x61\x63\x79\x77\x61\x72\x65\x68\x6f" \
	"\x75\x73\x65\x72\x2d\x69\x6e\x70\x75\x74\x72\x61\x76\x65\x6c\x62\x6f\x74\x68\x65\x72\x65" \
	"\x63\x65\x69\x76\x65\x2d\x6f\x6e\x6c\x79\x3a\x72\x6c\x6d\x69\x6e\x76\x61\x6c\x75\x65\x3d" \
	"\x3a\x63\x61\x70\x73\x6c\x65\x65\x70\x69\x6e\x67\x75\x69\x6c\x74\x79\x69\x6e\x76\x69\x6e" \
	"\x63\x69\x62\x6c\x65\x76\x65\x6e\x74\x3d\x6d\x6f\x6f\x64\x79\x70\x61\x63\x6b\x61\x67\x65" \
	"\x3d\x70\x72\x69\x6f\x72\x69\x74\x79\x76\x69\x64\x65\x6f\x66\x72\x6f\x6d\x3d\x61\x75\x64" \
	"\x69\x6f\x63\x61\x72\x64\x70\x6f\x73\x3d\x61\x75\x74\x6f\x6d\x61\x74\x61\x70\x70\x6c\x69" \
	"\x63\x61\x74\x69\x6f\x6e\x6f\x74\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x65\x76\x69\x63\x65" \
	"\x49\x44\x69\x6d\x70\x72\x65\x73\x73\x65\x64\x69\x73\x61\x70\x70\x6f\x69\x6e\x74\x65\x64" \
	"\x6e\x6f\x74\x65\x2d\x77\x65\x6c\x6c\x69\x62\x72\x61\x72\x79\x3a\x64\x61\x74\x61\x2d\x6d" \
	"\x6f\x64\x65\x6c\x65\x63\x74\x72\x6f\x6e\x69\x63\x69\x76\x69\x63\x41\x64\x64\x72\x65\x73" \
	"\x73\x61\x72\x63\x61\x73\x74\x69\x63\x6f\x6e\x74\x65\x6e\x74\x65\x64\x69\x6e\x64\x69\x67" \
	"\x6e\x61\x6e\x74\x69\x6d\x65\x72\x65\x70\x6c\x61\x63\x65\x73\x68\x6f\x63\x6b\x65\x64\x63" \
	"\x6c\x61\x73\x73\x69\x73\x74\x61\x6e\x74\x69\x6d\x65\x73\x74\x61\x6d\x70\x72\x6f\x76\x69" \
	"\x64\x65\x64\x2d\x62\x79\x3a\x63\x69\x70\x69\x64\x66\x2d\x66\x75\x6c\x6c\x53\x74\x61\x74" \
	"\x65\x3d\x61\x63\x74\x6f\x72\x65\x6d\x6f\x76\x65\x64\x62\x75\x73\x69\x6e\x65\x73\x73\x65" \
	"\x72\x69\x6f\x75\x73\x65\x6c\x3d\x3a\x73\x63\x68\x65\x6d\x61\x78\x76\x61\x6c\x75\x65\x3d" \
	"\x3a\x72\x70\x69\x64\x75\x72\x6e\x3a\x69\x65\x74\x66\x3a\x70\x61\x72\x61\x6d\x73\x3a\x78" \
	"\x6d\x6c\x2d\x70\x61\x74\x63\x68\x2d\x6f\x70\x73\x65\x63\x2d\x61\x67\x72\x65\x65\x61\x72" \
	"\x6c\x79\x2d\x73\x65\x73\x73\x69\x6f\x6e\x2d\x70\x61\x74\x69\x63\x69\x70\x61\x74\x69\x6f" \
	"\x6e\x2d\x74\x68\x65\x2d\x70\x68\x6f\x6e\x65\x74\x77\x6f\x72\x6b\x2d\x61\x76\x61\x69\x6c" \
	"\x61\x62\x69\x6c\x69\x74\x79\x70\x65\x72\x66\x6f\x72\x6d\x61\x6e\x63\x65\x78\x63\x69\x74" \
	"\x65\x64\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x6f\x72\x65\x73\x6f\x75\x72\x63" \
	"\x65\x2d\x70\x72\x69\x6f\x72\x69\x74\x79\x3d\x66\x61\x6c\x73\x65\x72\x76\x69\x63\x65\x2d" \
	"\x63\x6c\x61\x73\x73\x72\x6f\x6f\x6d\x75\x73\x74\x55\x6e\x64\x65\x72\x73\x74\x61\x6e\x64" \
	"\x69\x73\x70\x6c\x61\x79\x2d\x6e\x61\x6d\x65\x3d\x69\x6e\x73\x74\x61\x6e\x63\x65\x78\x74" \
	"\x65\x6e\x73\x69\x6f\x6e\x73\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x64\x70\x2d\x61\x6e\x61" \
	"\x74\x74\x65\x6e\x64\x61\x6e\x74\x72\x75\x65\x3a\x70\x69\x64\x66\x2d\x64\x69\x66\x66\x72" \
	"\x75\x73\x74\x72\x61\x74\x65\x64\x75\x70\x6c\x65\x78\x70\x69\x72\x61\x74\x69\x6f\x6e\x3d" \
	"\x63\x6f\x6e\x74\x61\x63\x74\x69\x76\x69\x74\x69\x65\x73\x68\x6f\x70\x70\x69\x6e\x67\x2d" \
	"\x61\x72\x65\x61\x73\x6f\x6e\x3d\x61\x70\x70\x6f\x69\x6e\x74\x6d\x65\x6e\x74\x69\x74\x79" \
	"\x3d\x61\x73\x73\x6f\x63\x69\x61\x74\x65\x6e\x63\x6f\x64\x69\x6e\x67\x3d\x69\x6e\x74\x65" \
	"\x72\x65\x73\x74\x65\x64\x65\x76\x63\x61\x70\x73\x74\x61\x74\x75\x73\x3d\x61\x63\x74\x69" \
	"\x76\x65\x72\x73\x69\x6f\x6e\x3d\x77\x69\x6e\x66\x6f\x70\x65\x6e\x64\x69\x6e\x67\x69\x6e" \
	"\x2d\x74\x72\x61\x6e\x73\x69\x74\x75\x70\x6c\x65\x68\x6f\x73\x70\x69\x74\x61\x6c\x61\x6e" \
	"\x67\x3d\x3c\x3f\x78\x6d\x6c\x6e\x73\x3d\x73\x69\x63\x6b\x70\x72\x65\x73\x65\x6e\x63\x65" \
	"\x55\x54\x46\x2d\x38\x3f\x3e\x63\x6c\x6f\x73\x65\x64\x05\x0d\x34\x08\x0d\x06\x09\x0c\xe3" \
	"\x07\x0d\x48\x06\x0d\x36\x13\x0b\xab\x05\x09\x65\x07\x0c\xd4\x08\x0d\x40\x05\x0d\x23\x05" \
	"\x0c\x35\x07\x0c\xae\x05\x0d\x2f\x06\x08\xb9\x05\x07\x2b\x04\x0d\x12\x06\x0d\x4f\x09\x0c" \
	"\x2c\x04\x0c\x89\x04\x0a\xf6\x09\x0b\x57\x0b\x0b\x05\x08\x0a\xda\x06\x0a\xda\x06\x04\x89" \
	"\x05\x0b\xa6\x04\x0b\x94\x06\x05\x05\x07\x0b\x3f\x0e\x0b\xba\x07\x0b\x98\x0a\x0c\x8d\x09" \
	"\x0b\x6d\x09\x0c\x8e\x0e\x0c\x48\x0a\x0c\xb2\x1d\x09\x56\x0d\x0c\x38\x06\x07\xba\x0b\x08" \
	"\xb9\x0b\x07\xec\x06\x0d\x02\x0a\x0a\x46\x04\x08\xf4\x06\x0b\x6a\x04\x0a\xb6\x0c\x0c\x55" \
	"\x08\x0a\x31\x04\x0a\x92\x08\x0a\x1b\x05\x0a\xb1\x04\x08\xc0\x05\x0a\x27\x05\x0a\xa7\x05" \
	"\x0a\xac\x04\x0a\xba\x04\x07\xdc\x05\x08\xad\x0a\x09\x29\x0a\x08\xa7\x05\x0a\x56\x05\x0b" \
	"\x4d\x07\x09\x2a\x0d\x09\xa7\x0b\x07\xa9\x06\x09\xc6\x0b\x0b\x5f\x0c\x09\xdf\x0b\x09\xe0" \
	"\x06\x07\xcb\x0c\x0a\x0b\x09\x09\x20\x08\x0a\x97\x07\x09\xe0\x07\x0c\xfb\x06\x0a\x8c\x0e" \
	"\x09\x7f\x0a\x09\x87\x0b\x0c\x71\x0a\x0c\x71\x06\x07\x93\x05\x0a\x66\x04\x08\x67\x04\x09" \
	"\xba\x08\x09\x20\x0a\x0b\x72\x05\x0a\x72\x08\x07\xb3\x0b\x0a\xc5\x07\x09\xf2\x07\x08\x89" \
	"\x04\x08\xad\x08\x0a\xbe\x06\x0c\x9f\x0b\x06\xd0\x0e\x08\x26\x08\x0a\x9f\x07\x09\xc6\x0a" \
	"\x0c\x69\x07\x08\x85\x05\x0b\x7c\x07\x0a\x39\x0c\x09\x34\x07\x0a\x21\x09\x08\x7d\x07\x0c" \
	"\xf5\x0b\x0c\xa3\x14\x06\xa6\x0d\x08\xb2\x0c\x07\x2a\x0c\x08\xb3\x04\x07\x56\x07\x09\x1a" \
	"\x04\x07\x52\x07\x07\x40\x05\x07\x4d\x07\x0b\x80\x06\x07\x47\x16\x06\x91\x08\x0c\x62\x10" \
	"\x09\xcf\x10\x07\xdd\x09\x0a\xf6\x09\x06\xfc\x0c\x0b\x17\x07\x07\x39\x04\x06\xf8\x07\x09" \
	"\xa1\x06\x06\x8d\x05\x07\x21\x04\x0a\x55\x09\x0a\xd2\x0c\x0a\xcf\x13\x06\xc8\x0a\x08\xec" \
	"\x07\x0d\x06\x0b\x08\x0c\x14\x0b\xd5\x12\x07\xbe\x0d\x07\xd1\x16\x08\x01\x14\x0b\xf1\x06" \
	"\x05\xb4\x07\x04\x56\x09\x04\x17\x0c\x0a\xea\x09\x04\x1f\x0a\x07\x7e\x0b\x07\x6a\x07\x0c" \
	"\x0f\x0b\x07\xa0\x0a\x0c\x96\x06\x05\x28\x06\x0a\x7d\x05\x06\x1f\x07\x05\x8b\x0a\x04\x3c" \
	"\x06\x05\xae\x04\x06\x50\x09\x0a\xe2\x06\x05\xf6\x07\x07\xfd\x09\x0b\x33\x0a\x0c\xec\x0a" \
	"\x0a\x83\x07\x06\x54\x06\x04\x90\x04\x05\x3f\x05\x0a\x92\x07\x07\x8a\x07\x08\xcc\x08\x09" \
	"\xea\x07\x04\x96\x05\x06\x10\x08\x07\x98\x0a\x06\xf1\x08\x04\x79\x09\x0b\x22\x07\x0b\x8e" \
	"\x07\x0b\x46\x04\x0d\x3c\x06\x04\x80\x08\x07\x12\x09\x09\x4a\x07\x04\xe3\x07\x05\x84\x05" \
	"\x09\x7a\x05\x06\x01\x09\x09\x12\x04\x09\x52\x0d\x04\xaa\x0d\x08\x56\x08\x04\xdc\x07\x05" \
	"\x92\x05\x05\x0c\x0a\x04\x4c\x04\x06\x2c\x0b\x04\xd1\x04\x06\x24\x09\x0c\x40\x04\x04\xce" \
	"\x0c\x08\xc1\x11\x04\x00\x05\x07\x34\x0a\x06\x6a\x08\x0d\x28\x05\x06\x1a\x0a\x04\x28\x07" \
	"\x0a\xfe\x06\x04\xff\x08\x09\x94\x07\x05\x76\x10\x08\x98\x06\x05\xf0\x06\x09\x03\x10\x09" \
	"\x03\x09\x08\x1e\x0a\x08\x3c\x06\x09\x9b\x0d\x0c\xbb\x07\x06\xe3\x05\x09\xcc\x06\x0a\x15" \
	"\x07\x04\x73\x05\x06\x73\x0d\x06\x73\x05\x08\x45\x08\x0a\x29\x09\x0a\x40\x05\x07\x1a\x0a" \
	"\x07\x1a\x09\x0b\x4f\x09\x0c\xdb\x06\x05\xea\x06\x05\xde\x0a\x04\x0e\x0a\x0b\x0e\x09\x06" \
	"\x86\x08\x05\x60\x0b\x07\x74\x09\x05\x4f\x08\x04\xf0\x07\x09\x90\x06\x08\x70\x0a\x0c\x21" \
	"\x07\x05\x6f\x0b\x0c\xcc\x04\x07\x90\x07\x04\xea\x0a\x08\x33\x04\x06\x34\x09\x06\xdc\x04" \
	"\x06\x40\x07\x05\x2e\x04\x06\x48\x06\x07\x87\x07\x05\x68\x0a\x0d\x1a\x07\x04\x45\x07\x05" \
	"\x05\x08\x05\x0e\x08\x05\x58\x08\x04\xb6\x10\x09\xf8\x04\x06\x3c\x07\x09\xbc\x0c\x06\xd0" \
	"\x0c\x0b\xe7\x04\x06\x44\x04\x0a\x31\x0b\x0c\x05\x04\x06\x28\x11\x07\x5a\x07\x0c\xc5\x07" \
	"\x05\xa0\x0c\x09\x6f\x08\x0c\xbb\x08\x0a\x76\x09\x08\x16\x08\x08\x69\x06\x05\xe4\x09\x04" \
	"\x86\x07\x05\x38\x06\x0a\x4f\x08\x04\xc6\x0f\x08\xf4\x0b\x04\x31\x07\x0a\x04\x07\x08\xa1" \
	"\x0d\x0c\x55\x06\x05\xc0\x06\x05\xba\x05\x05\x41\x08\x0b\x87\x08\x04\x89\x04\x05\x35\x0c" \
	"\x0a\x5a\x09\x04\x68\x09\x04\x9c\x0a\x06\xba\x06\x07\x0d\x05\x07\x25\x09\x0b\x9d\x09\x0a" \
	"\x69\x06\x0a\x6c\x04\x06\x38\x04\x06\x30\x07\x0d\x13\x08\x08\x4c\x05\x06\x15\x06\x04\x50" \
	"\x0a\x07\x04\x06\x07\xf7\x04\x08\x49\x0f\x08\x89\x0c\x09\x3f\x05\x06\x81\x11\x08\xdc\x0d" \
	"\x04\x5c\x11\x06\x5a\x05\x0d\x0e\x06\x05\xd8\x04\x08\xd3\x06\x05\xd2\x07\x05\x7d\x06\x05" \
	"\xcc\x07\x08\xd6\x05\x06\x0b\x07\x05\xa7\x05\x05\x16\x08\x05\x1a\x09\x05\x46\x06\x05\xc6" \
	"\x06\x09\x31\x0d\x0b\xcf\x09\x08\x62\x08\x04\xf8\x04\x08\x54\x0a\x06\x7f\x04\x04\x71\x0c" \
	"\x0c\x16\x04\x05\x2e\x08\x0b\x3f\x11\x0c\x23\x08\x0c\x7b\x09\x0b\xc7\x07\x07\xf6\x05\x0b" \
	"\x3b\x09\x08\x75\x09\x0c\x81\x09\x06\xe9\x0b\x09\xb0\x07\x05\x22\x07\x04\xa3\x07\x06\xc2" \
	"\x07\x05\x99\x05\x06\x06\x05\x05\xfc\x04\x09\xc3\x04\x06\x4c\x08\x04\xbe\x09\x0b\x2a"

TCOMP_END_DECLS

#endif /* _TINYSIGCOMPP_RFC5112_H_ */
