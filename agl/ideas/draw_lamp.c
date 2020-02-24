/*
 * (c) Copyright 1993, Silicon Graphics, Inc.
 * ALL RIGHTS RESERVED 
 * Permission to use, copy, modify, and distribute this software for 
 * any purpose and without fee is hereby granted, provided that the above
 * copyright notice appear in all copies and that both the copyright notice
 * and this permission notice appear in supporting documentation, and that 
 * the name of Silicon Graphics, Inc. not be used in advertising
 * or publicity pertaining to distribution of the software without specific,
 * written prior permission. 
 *
 * THE MATERIAL EMBODIED ON THIS SOFTWARE IS PROVIDED TO YOU "AS-IS"
 * AND WITHOUT WARRANTY OF ANY KIND, EXPRESS, IMPLIED OR OTHERWISE,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY OR
 * FITNESS FOR A PARTICULAR PURPOSE.  IN NO EVENT SHALL SILICON
 * GRAPHICS, INC.  BE LIABLE TO YOU OR ANYONE ELSE FOR ANY DIRECT,
 * SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY
 * KIND, OR ANY DAMAGES WHATSOEVER, INCLUDING WITHOUT LIMITATION,
 * LOSS OF PROFIT, LOSS OF USE, SAVINGS OR REVENUE, OR THE CLAIMS OF
 * THIRD PARTIES, WHETHER OR NOT SILICON GRAPHICS, INC.  HAS BEEN
 * ADVISED OF THE POSSIBILITY OF SUCH LOSS, HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE
 * POSSESSION, USE OR PERFORMANCE OF THIS SOFTWARE.
 * 
 * US Government Users Restricted Rights 
 * Use, duplication, or disclosure by the Government is subject to
 * restrictions set forth in FAR 52.227.19(c)(2) or subparagraph
 * (c)(1)(ii) of the Rights in Technical Data and Computer Software
 * clause at DFARS 252.227-7013 and/or in similar or successor
 * clauses in the FAR or the DOD or NASA FAR Supplement.
 * Unpublished-- rights reserved under the copyright laws of the
 * United States.  Contractor/manufacturer is Silicon Graphics,
 * Inc., 2011 N.  Shoreline Blvd., Mountain View, CA 94039-7311.
 *
 * OpenGL(TM) is a trademark of Silicon Graphics, Inc.
 */
#include "glut.h"

#include "objects.h"
/*
#define glNormal3fv(v)  \
{ \
  printf("%g, %g, %g --> %.10f\n", \
	 v[0], v[1], v[2], v[0]*v[0] + v[1]*v[1] + v[2]*v[2]); \
  glNormal3fv(v); \
}
*/
float hp[6][13][3] = {

    {
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
    },
    {
	{0.438371, 0.000000, 0.898794},
	{0.379641, 0.219186, 0.898794},
	{0.219186, 0.379641, 0.898794},
	{0.000000, 0.438371, 0.898794},
	{-0.219186, 0.379641, 0.898794},
	{-0.379641, 0.219186, 0.898794},
	{-0.438371, 0.000000, 0.898794},
	{-0.379641, -0.219186, 0.898794},
	{-0.219186, -0.379641, 0.898794},
	{0.000000, -0.438371, 0.898794},
	{0.219186, -0.379641, 0.898794},
	{0.379641, -0.219186, 0.898794},
	{0.438371, 0.000000, 0.898794},
    },
    {
	{0.788011, 0.000000, 0.615662},
	{0.682437, 0.394005, 0.615662},
	{0.394005, 0.682437, 0.615662},
	{0.000000, 0.788011, 0.615662},
	{-0.394005, 0.682437, 0.615662},
	{-0.682437, 0.394005, 0.615662},
	{-0.788011, 0.000000, 0.615662},
	{-0.682437, -0.394005, 0.615662},
	{-0.394005, -0.682437, 0.615662},
	{0.000000, -0.788011, 0.615662},
	{0.394005, -0.682437, 0.615662},
	{0.682437, -0.394005, 0.615662},
	{0.788011, 0.000000, 0.615662},
    },
    {
	{0.978148, 0.000000, 0.207912},
	{0.847101, 0.489074, 0.207912},
	{0.489074, 0.847101, 0.207912},
	{0.000000, 0.978148, 0.207912},
	{-0.489074, 0.847101, 0.207912},
	{-0.847101, 0.489074, 0.207912},
	{-0.978148, 0.000000, 0.207912},
	{-0.847101, -0.489074, 0.207912},
	{-0.489074, -0.847101, 0.207912},
	{0.000000, -0.978148, 0.207912},
	{0.489074, -0.847101, 0.207912},
	{0.847101, -0.489074, 0.207912},
	{0.978148, 0.000000, 0.207912},
    },
    {
	{0.970296, 0.000000, -0.241922},
	{0.840301, 0.485148, -0.241922},
	{0.485148, 0.840301, -0.241922},
	{0.000000, 0.970296, -0.241922},
	{-0.485148, 0.840301, -0.241922},
	{-0.840301, 0.485148, -0.241922},
	{-0.970296, 0.000000, -0.241922},
	{-0.840301, -0.485148, -0.241922},
	{-0.485148, -0.840301, -0.241922},
	{0.000000, -0.970296, -0.241922},
	{0.485148, -0.840301, -0.241922},
	{0.840301, -0.485148, -0.241922},
	{0.970296, 0.000000, -0.241922},
    },
    {
	{0.766044, 0.000000, -0.642788},
	{0.663414, 0.383022, -0.642788},
	{0.383022, 0.663414, -0.642788},
	{0.000000, 0.766044, -0.642788},
	{-0.383022, 0.663414, -0.642788},
	{-0.663414, 0.383022, -0.642788},
	{-0.766044, 0.000000, -0.642788},
	{-0.663414, -0.383022, -0.642788},
	{-0.383022, -0.663414, -0.642788},
	{0.000000, -0.766044, -0.642788},
	{0.383022, -0.663414, -0.642788},
	{0.663414, -0.383022, -0.642788},
	{0.766044, 0.000000, -0.642788},
    },
};

float ltp[9][25][3] = {
     {
	{10.000000, 0.000000, 1.000000},
	{9.659258, -2.588191, 1.000000},
	{8.660254, -5.000000, 1.000000},
	{7.071068, -7.071068, 1.000000},
	{5.000000, -8.660254, 1.000000},
	{2.588191, -9.659258, 1.000000},
	{0.000000, -10.000000, 1.000000},
	{-2.588191, -9.659258, 1.000000},
	{-5.000000, -8.660254, 1.000000},
	{-7.071068, -7.071068, 1.000000},
	{-8.660254, -5.000000, 1.000000},
	{-9.659258, -2.588191, 1.000000},
	{-10.000000, 0.000000, 1.000000},
	{-9.659258, 2.588191, 1.000000},
	{-8.660254, 5.000000, 1.000000},
	{-7.071068, 7.071068, 1.000000},
	{-5.000000, 8.660254, 1.000000},
	{-2.588191, 9.659258, 1.000000},
	{0.000000, 10.000000, 1.000000},
	{2.588191, 9.659258, 1.000000},
	{5.000000, 8.660254, 1.000000},
	{7.071068, 7.071068, 1.000000},
	{8.660254, 5.000000, 1.000000},
	{9.659258, 2.588191, 1.000000},
	{10.000000, 0.000000, 1.000000},
    },

     {
	{10.707107, 0.000000, 0.707107},
	{10.342271, -2.771203, 0.707107},
	{9.272627, -5.353553, 0.707107},
	{7.571068, -7.571068, 0.707107},
	{5.353553, -9.272627, 0.707107},
	{2.771203, -10.342271, 0.707107},
	{0.000000, -10.707107, 0.707107},
	{-2.771203, -10.342271, 0.707107},
	{-5.353553, -9.272627, 0.707107},
	{-7.571068, -7.571068, 0.707107},
	{-9.272627, -5.353553, 0.707107},
	{-10.342271, -2.771203, 0.707107},
	{-10.707107, 0.000000, 0.707107},
	{-10.342271, 2.771203, 0.707107},
	{-9.272627, 5.353553, 0.707107},
	{-7.571068, 7.571068, 0.707107},
	{-5.353553, 9.272627, 0.707107},
	{-2.771203, 10.342271, 0.707107},
	{0.000000, 10.707107, 0.707107},
	{2.771203, 10.342271, 0.707107},
	{5.353553, 9.272627, 0.707107},
	{7.571068, 7.571068, 0.707107},
	{9.272627, 5.353553, 0.707107},
	{10.342271, 2.771203, 0.707107},
	{10.707107, 0.000000, 0.707107},
    },

     {
	{11.000000, 0.000000, 0.000000},
	{10.625184, -2.847009, 0.000000},
	{9.526279, -5.500000, 0.000000},
	{7.778174, -7.778174, 0.000000},
	{5.500000, -9.526279, 0.000000},
	{2.847009, -10.625184, 0.000000},
	{0.000000, -11.000000, 0.000000},
	{-2.847009, -10.625184, 0.000000},
	{-5.500000, -9.526279, 0.000000},
	{-7.778174, -7.778174, 0.000000},
	{-9.526279, -5.500000, 0.000000},
	{-10.625184, -2.847009, 0.000000},
	{-11.000000, 0.000000, 0.000000},
	{-10.625184, 2.847009, 0.000000},
	{-9.526279, 5.500000, 0.000000},
	{-7.778174, 7.778174, 0.000000},
	{-5.500000, 9.526279, 0.000000},
	{-2.847009, 10.625184, 0.000000},
	{0.000000, 11.000000, 0.000000},
	{2.847009, 10.625184, 0.000000},
	{5.500000, 9.526279, 0.000000},
	{7.778174, 7.778174, 0.000000},
	{9.526279, 5.500000, 0.000000},
	{10.625184, 2.847009, 0.000000},
	{11.000000, 0.000000, 0.000000},
    },

     {
	{10.707107, 0.000000, -0.707107},
	{10.342271, -2.771203, -0.707107},
	{9.272627, -5.353553, -0.707107},
	{7.571068, -7.571068, -0.707107},
	{5.353553, -9.272627, -0.707107},
	{2.771203, -10.342271, -0.707107},
	{0.000000, -10.707107, -0.707107},
	{-2.771203, -10.342271, -0.707107},
	{-5.353553, -9.272627, -0.707107},
	{-7.571068, -7.571068, -0.707107},
	{-9.272627, -5.353553, -0.707107},
	{-10.342271, -2.771203, -0.707107},
	{-10.707107, 0.000000, -0.707107},
	{-10.342271, 2.771203, -0.707107},
	{-9.272627, 5.353553, -0.707107},
	{-7.571068, 7.571068, -0.707107},
	{-5.353553, 9.272627, -0.707107},
	{-2.771203, 10.342271, -0.707107},
	{0.000000, 10.707107, -0.707107},
	{2.771203, 10.342271, -0.707107},
	{5.353553, 9.272627, -0.707107},
	{7.571068, 7.571068, -0.707107},
	{9.272627, 5.353553, -0.707107},
	{10.342271, 2.771203, -0.707107},
	{10.707107, 0.000000, -0.707107},
    },

     {
	{10.000000, 0.000000, -1.000000},
	{9.659258, -2.588191, -1.000000},
	{8.660254, -5.000000, -1.000000},
	{7.071068, -7.071068, -1.000000},
	{5.000000, -8.660254, -1.000000},
	{2.588191, -9.659258, -1.000000},
	{0.000000, -10.000000, -1.000000},
	{-2.588191, -9.659258, -1.000000},
	{-5.000000, -8.660254, -1.000000},
	{-7.071068, -7.071068, -1.000000},
	{-8.660254, -5.000000, -1.000000},
	{-9.659258, -2.588191, -1.000000},
	{-10.000000, 0.000000, -1.000000},
	{-9.659258, 2.588191, -1.000000},
	{-8.660254, 5.000000, -1.000000},
	{-7.071068, 7.071068, -1.000000},
	{-5.000000, 8.660254, -1.000000},
	{-2.588191, 9.659258, -1.000000},
	{0.000000, 10.000000, -1.000000},
	{2.588191, 9.659258, -1.000000},
	{5.000000, 8.660254, -1.000000},
	{7.071068, 7.071068, -1.000000},
	{8.660254, 5.000000, -1.000000},
	{9.659258, 2.588191, -1.000000},
	{10.000000, 0.000000, -1.000000},
    },

     {
	{9.292893, 0.000000, -0.707107},
	{8.976246, -2.405178, -0.707107},
	{8.047881, -4.646447, -0.707107},
	{6.571068, -6.571068, -0.707107},
	{4.646447, -8.047881, -0.707107},
	{2.405178, -8.976246, -0.707107},
	{0.000000, -9.292893, -0.707107},
	{-2.405178, -8.976246, -0.707107},
	{-4.646447, -8.047881, -0.707107},
	{-6.571068, -6.571068, -0.707107},
	{-8.047881, -4.646447, -0.707107},
	{-8.976246, -2.405178, -0.707107},
	{-9.292893, 0.000000, -0.707107},
	{-8.976246, 2.405178, -0.707107},
	{-8.047881, 4.646447, -0.707107},
	{-6.571068, 6.571068, -0.707107},
	{-4.646447, 8.047881, -0.707107},
	{-2.405178, 8.976246, -0.707107},
	{0.000000, 9.292893, -0.707107},
	{2.405178, 8.976246, -0.707107},
	{4.646447, 8.047881, -0.707107},
	{6.571068, 6.571068, -0.707107},
	{8.047881, 4.646447, -0.707107},
	{8.976246, 2.405178, -0.707107},
	{9.292893, 0.000000, -0.707107},
    },

     {
	{9.000000, 0.000000, 0.000000},
	{8.693333, -2.329371, 0.000000},
	{7.794229, -4.500000, 0.000000},
	{6.363961, -6.363961, 0.000000},
	{4.500000, -7.794229, 0.000000},
	{2.329371, -8.693333, 0.000000},
	{0.000000, -9.000000, 0.000000},
	{-2.329371, -8.693333, 0.000000},
	{-4.500000, -7.794229, 0.000000},
	{-6.363961, -6.363961, 0.000000},
	{-7.794229, -4.500000, 0.000000},
	{-8.693333, -2.329371, 0.000000},
	{-9.000000, 0.000000, 0.000000},
	{-8.693333, 2.329371, 0.000000},
	{-7.794229, 4.500000, 0.000000},
	{-6.363961, 6.363961, 0.000000},
	{-4.500000, 7.794229, 0.000000},
	{-2.329371, 8.693333, 0.000000},
	{0.000000, 9.000000, 0.000000},
	{2.329371, 8.693333, 0.000000},
	{4.500000, 7.794229, 0.000000},
	{6.363961, 6.363961, 0.000000},
	{7.794229, 4.500000, 0.000000},
	{8.693333, 2.329371, 0.000000},
	{9.000000, 0.000000, 0.000000},
    },

     {
	{9.292893, 0.000000, 0.707107},
	{8.976246, -2.405178, 0.707107},
	{8.047881, -4.646447, 0.707107},
	{6.571068, -6.571068, 0.707107},
	{4.646447, -8.047881, 0.707107},
	{2.405178, -8.976246, 0.707107},
	{0.000000, -9.292893, 0.707107},
	{-2.405178, -8.976246, 0.707107},
	{-4.646447, -8.047881, 0.707107},
	{-6.571068, -6.571068, 0.707107},
	{-8.047881, -4.646447, 0.707107},
	{-8.976246, -2.405178, 0.707107},
	{-9.292893, 0.000000, 0.707107},
	{-8.976246, 2.405178, 0.707107},
	{-8.047881, 4.646447, 0.707107},
	{-6.571068, 6.571068, 0.707107},
	{-4.646447, 8.047881, 0.707107},
	{-2.405178, 8.976246, 0.707107},
	{0.000000, 9.292893, 0.707107},
	{2.405178, 8.976246, 0.707107},
	{4.646447, 8.047881, 0.707107},
	{6.571068, 6.571068, 0.707107},
	{8.047881, 4.646447, 0.707107},
	{8.976246, 2.405178, 0.707107},
	{9.292893, 0.000000, 0.707107},
    },

     {
	{10.000000, 0.000000, 1.000000},
	{9.659258, -2.588191, 1.000000},
	{8.660254, -5.000000, 1.000000},
	{7.071068, -7.071068, 1.000000},
	{5.000000, -8.660254, 1.000000},
	{2.588191, -9.659258, 1.000000},
	{0.000000, -10.000000, 1.000000},
	{-2.588191, -9.659258, 1.000000},
	{-5.000000, -8.660254, 1.000000},
	{-7.071068, -7.071068, 1.000000},
	{-8.660254, -5.000000, 1.000000},
	{-9.659258, -2.588191, 1.000000},
	{-10.000000, 0.000000, 1.000000},
	{-9.659258, 2.588191, 1.000000},
	{-8.660254, 5.000000, 1.000000},
	{-7.071068, 7.071068, 1.000000},
	{-5.000000, 8.660254, 1.000000},
	{-2.588191, 9.659258, 1.000000},
	{0.000000, 10.000000, 1.000000},
	{2.588191, 9.659258, 1.000000},
	{5.000000, 8.660254, 1.000000},
	{7.071068, 7.071068, 1.000000},
	{8.660254, 5.000000, 1.000000},
	{9.659258, 2.588191, 1.000000},
	{10.000000, 0.000000, 1.000000},
    },

};

float ltn[9][25][3] = {
    {
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
    },

    {
	{0.707107, 0.000000, 0.707107},
	{0.683013, -0.183013, 0.707107},
	{0.612372, -0.353553, 0.707107},
	{0.500000, -0.500000, 0.707107},
	{0.353553, -0.612372, 0.707107},
	{0.183013, -0.683013, 0.707107},
	{0.000000, -0.707107, 0.707107},
	{-0.183013, -0.683013, 0.707107},
	{-0.353553, -0.612372, 0.707107},
	{-0.500000, -0.500000, 0.707107},
	{-0.612372, -0.353553, 0.707107},
	{-0.683013, -0.183013, 0.707107},
	{-0.707107, 0.000000, 0.707107},
	{-0.683013, 0.183013, 0.707107},
	{-0.612372, 0.353553, 0.707107},
	{-0.500000, 0.500000, 0.707107},
	{-0.353553, 0.612372, 0.707107},
	{-0.183013, 0.683013, 0.707107},
	{0.000000, 0.707107, 0.707107},
	{0.183013, 0.683013, 0.707107},
	{0.353553, 0.612372, 0.707107},
	{0.500000, 0.500000, 0.707107},
	{0.612372, 0.353553, 0.707107},
	{0.683013, 0.183013, 0.707107},
	{0.707107, 0.000000, 0.707107},
    },

    {
	{1.000000, 0.000000, 0.000000},
	{0.965926, -0.258819, 0.000000},
	{0.866025, -0.500000, 0.000000},
	{0.707107, -0.707107, 0.000000},
	{0.500000, -0.866025, 0.000000},
	{0.258819, -0.965926, 0.000000},
	{0.000000, -1.000000, 0.000000},
	{-0.258819, -0.965926, 0.000000},
	{-0.500000, -0.866025, 0.000000},
	{-0.707107, -0.707107, 0.000000},
	{-0.866025, -0.500000, 0.000000},
	{-0.965926, -0.258819, 0.000000},
	{-1.000000, 0.000000, 0.000000},
	{-0.965926, 0.258819, 0.000000},
	{-0.866025, 0.500000, 0.000000},
	{-0.707107, 0.707107, 0.000000},
	{-0.500000, 0.866025, 0.000000},
	{-0.258819, 0.965926, 0.000000},
	{0.000000, 1.000000, 0.000000},
	{0.258819, 0.965926, 0.000000},
	{0.500000, 0.866025, 0.000000},
	{0.707107, 0.707107, 0.000000},
	{0.866025, 0.500000, 0.000000},
	{0.965926, 0.258819, 0.000000},
	{1.000000, 0.000000, 0.000000},
    },

    {
	{0.707107, 0.000000, -0.707107},
	{0.683013, -0.183013, -0.707107},
	{0.612372, -0.353553, -0.707107},
	{0.500000, -0.500000, -0.707107},
	{0.353553, -0.612372, -0.707107},
	{0.183013, -0.683013, -0.707107},
	{0.000000, -0.707107, -0.707107},
	{-0.183013, -0.683013, -0.707107},
	{-0.353553, -0.612372, -0.707107},
	{-0.500000, -0.500000, -0.707107},
	{-0.612372, -0.353553, -0.707107},
	{-0.683013, -0.183013, -0.707107},
	{-0.707107, 0.000000, -0.707107},
	{-0.683013, 0.183013, -0.707107},
	{-0.612372, 0.353553, -0.707107},
	{-0.500000, 0.500000, -0.707107},
	{-0.353553, 0.612372, -0.707107},
	{-0.183013, 0.683013, -0.707107},
	{0.000000, 0.707107, -0.707107},
	{0.183013, 0.683013, -0.707107},
	{0.353553, 0.612372, -0.707107},
	{0.500000, 0.500000, -0.707107},
	{0.612372, 0.353553, -0.707107},
	{0.683013, 0.183013, -0.707107},
	{0.707107, 0.000000, -0.707107},
    },

    {
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
	{0.000000, 0.000000, -1.000000},
    },

    {
	{-0.707107, 0.000000, -0.707107},
	{-0.683013, 0.183013, -0.707107},
	{-0.612372, 0.353553, -0.707107},
	{-0.500000, 0.500000, -0.707107},
	{-0.353553, 0.612372, -0.707107},
	{-0.183013, 0.683013, -0.707107},
	{0.000000, 0.707107, -0.707107},
	{0.183013, 0.683013, -0.707107},
	{0.353553, 0.612372, -0.707107},
	{0.500000, 0.500000, -0.707107},
	{0.612372, 0.353553, -0.707107},
	{0.683013, 0.183013, -0.707107},
	{0.707107, 0.000000, -0.707107},
	{0.683013, -0.183013, -0.707107},
	{0.612372, -0.353553, -0.707107},
	{0.500000, -0.500000, -0.707107},
	{0.353553, -0.612372, -0.707107},
	{0.183013, -0.683013, -0.707107},
	{0.000000, -0.707107, -0.707107},
	{-0.183013, -0.683013, -0.707107},
	{-0.353553, -0.612372, -0.707107},
	{-0.500000, -0.500000, -0.707107},
	{-0.612372, -0.353553, -0.707107},
	{-0.683013, -0.183013, -0.707107},
	{-0.707107, 0.000000, -0.707107},
    },

    {
	{-1.000000, 0.000000, 0.000000},
	{-0.965926, 0.258819, 0.000000},
	{-0.866025, 0.500000, 0.000000},
	{-0.707107, 0.707107, 0.000000},
	{-0.500000, 0.866025, 0.000000},
	{-0.258819, 0.965926, 0.000000},
	{0.000000, 1.000000, 0.000000},
	{0.258819, 0.965926, 0.000000},
	{0.500000, 0.866025, 0.000000},
	{0.707107, 0.707107, 0.000000},
	{0.866025, 0.500000, 0.000000},
	{0.965926, 0.258819, 0.000000},
	{1.000000, 0.000000, 0.000000},
	{0.965926, -0.258819, 0.000000},
	{0.866025, -0.500000, 0.000000},
	{0.707107, -0.707107, 0.000000},
	{0.500000, -0.866025, 0.000000},
	{0.258819, -0.965926, 0.000000},
	{0.000000, -1.000000, 0.000000},
	{-0.258819, -0.965926, 0.000000},
	{-0.500000, -0.866025, 0.000000},
	{-0.707107, -0.707107, 0.000000},
	{-0.866025, -0.500000, 0.000000},
	{-0.965926, -0.258819, 0.000000},
	{-1.000000, 0.000000, 0.000000},
    },

    {
	{-0.707107, 0.000000, 0.707107},
	{-0.683013, 0.183013, 0.707107},
	{-0.612372, 0.353553, 0.707107},
	{-0.500000, 0.500000, 0.707107},
	{-0.353553, 0.612372, 0.707107},
	{-0.183013, 0.683013, 0.707107},
	{0.000000, 0.707107, 0.707107},
	{0.183013, 0.683013, 0.707107},
	{0.353553, 0.612372, 0.707107},
	{0.500000, 0.500000, 0.707107},
	{0.612372, 0.353553, 0.707107},
	{0.683013, 0.183013, 0.707107},
	{0.707107, 0.000000, 0.707107},
	{0.683013, -0.183013, 0.707107},
	{0.612372, -0.353553, 0.707107},
	{0.500000, -0.500000, 0.707107},
	{0.353553, -0.612372, 0.707107},
	{0.183013, -0.683013, 0.707107},
	{0.000000, -0.707107, 0.707107},
	{-0.183013, -0.683013, 0.707107},
	{-0.353553, -0.612372, 0.707107},
	{-0.500000, -0.500000, 0.707107},
	{-0.612372, -0.353553, 0.707107},
	{-0.683013, -0.183013, 0.707107},
	{-0.707107, 0.000000, 0.707107},
    },

    {
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
	{0.000000, 0.000000, 1.000000},
    },

};

void draw_hemisphere(void) {

  glCallList(MAT_HEMISPHERE);
  glEnable(GL_LIGHTING);

  /* CF damn! */
  /* glEnable(GL_NORMALIZE); */

	glBegin(GL_TRIANGLE_STRIP);
	    glNormal3fv(hp[0][0]); glVertex3fv(hp[0][0]);
	    glNormal3fv(hp[1][0]); glVertex3fv(hp[1][0]);
	    glNormal3fv(hp[0][1]); glVertex3fv(hp[0][1]);
	    glNormal3fv(hp[1][1]); glVertex3fv(hp[1][1]);
	    glNormal3fv(hp[0][2]); glVertex3fv(hp[0][2]);
	    glNormal3fv(hp[1][2]); glVertex3fv(hp[1][2]);
	    glNormal3fv(hp[0][3]); glVertex3fv(hp[0][3]);
	    glNormal3fv(hp[1][3]); glVertex3fv(hp[1][3]);
	    glNormal3fv(hp[0][4]); glVertex3fv(hp[0][4]);
	    glNormal3fv(hp[1][4]); glVertex3fv(hp[1][4]);
	    glNormal3fv(hp[0][5]); glVertex3fv(hp[0][5]);
	    glNormal3fv(hp[1][5]); glVertex3fv(hp[1][5]);
	    glNormal3fv(hp[0][6]); glVertex3fv(hp[0][6]);
	    glNormal3fv(hp[1][6]); glVertex3fv(hp[1][6]);
	    glNormal3fv(hp[0][7]); glVertex3fv(hp[0][7]);
	    glNormal3fv(hp[1][7]); glVertex3fv(hp[1][7]);
	    glNormal3fv(hp[0][8]); glVertex3fv(hp[0][8]);
	    glNormal3fv(hp[1][8]); glVertex3fv(hp[1][8]);
	    glNormal3fv(hp[0][9]); glVertex3fv(hp[0][9]);
	    glNormal3fv(hp[1][9]); glVertex3fv(hp[1][9]);
	    glNormal3fv(hp[0][10]); glVertex3fv(hp[0][10]);
	    glNormal3fv(hp[1][10]); glVertex3fv(hp[1][10]);
	    glNormal3fv(hp[0][11]); glVertex3fv(hp[0][11]);
	    glNormal3fv(hp[1][11]); glVertex3fv(hp[1][11]);
	    glNormal3fv(hp[0][12]); glVertex3fv(hp[0][12]);
	    glNormal3fv(hp[1][12]); glVertex3fv(hp[1][12]);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	    glNormal3fv(hp[1][0]); glVertex3fv(hp[1][0]);
	    glNormal3fv(hp[2][0]); glVertex3fv(hp[2][0]);
	    glNormal3fv(hp[1][1]); glVertex3fv(hp[1][1]);
	    glNormal3fv(hp[2][1]); glVertex3fv(hp[2][1]);
	    glNormal3fv(hp[1][2]); glVertex3fv(hp[1][2]);
	    glNormal3fv(hp[2][2]); glVertex3fv(hp[2][2]);
	    glNormal3fv(hp[1][3]); glVertex3fv(hp[1][3]);
	    glNormal3fv(hp[2][3]); glVertex3fv(hp[2][3]);
	    glNormal3fv(hp[1][4]); glVertex3fv(hp[1][4]);
	    glNormal3fv(hp[2][4]); glVertex3fv(hp[2][4]);
	    glNormal3fv(hp[1][5]); glVertex3fv(hp[1][5]);
	    glNormal3fv(hp[2][5]); glVertex3fv(hp[2][5]);
	    glNormal3fv(hp[1][6]); glVertex3fv(hp[1][6]);
	    glNormal3fv(hp[2][6]); glVertex3fv(hp[2][6]);
	    glNormal3fv(hp[1][7]); glVertex3fv(hp[1][7]);
	    glNormal3fv(hp[2][7]); glVertex3fv(hp[2][7]);
	    glNormal3fv(hp[1][8]); glVertex3fv(hp[1][8]);
	    glNormal3fv(hp[2][8]); glVertex3fv(hp[2][8]);
	    glNormal3fv(hp[1][9]); glVertex3fv(hp[1][9]);
	    glNormal3fv(hp[2][9]); glVertex3fv(hp[2][9]);
	    glNormal3fv(hp[1][10]); glVertex3fv(hp[1][10]);
	    glNormal3fv(hp[2][10]); glVertex3fv(hp[2][10]);
	    glNormal3fv(hp[1][11]); glVertex3fv(hp[1][11]);
	    glNormal3fv(hp[2][11]); glVertex3fv(hp[2][11]);
	    glNormal3fv(hp[1][12]); glVertex3fv(hp[1][12]);
	    glNormal3fv(hp[2][12]); glVertex3fv(hp[2][12]);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	    glNormal3fv(hp[2][0]); glVertex3fv(hp[2][0]);
	    glNormal3fv(hp[3][0]); glVertex3fv(hp[3][0]);
	    glNormal3fv(hp[2][1]); glVertex3fv(hp[2][1]);
	    glNormal3fv(hp[3][1]); glVertex3fv(hp[3][1]);
	    glNormal3fv(hp[2][2]); glVertex3fv(hp[2][2]);
	    glNormal3fv(hp[3][2]); glVertex3fv(hp[3][2]);
	    glNormal3fv(hp[2][3]); glVertex3fv(hp[2][3]);
	    glNormal3fv(hp[3][3]); glVertex3fv(hp[3][3]);
	    glNormal3fv(hp[2][4]); glVertex3fv(hp[2][4]);
	    glNormal3fv(hp[3][4]); glVertex3fv(hp[3][4]);
	    glNormal3fv(hp[2][5]); glVertex3fv(hp[2][5]);
	    glNormal3fv(hp[3][5]); glVertex3fv(hp[3][5]);
	    glNormal3fv(hp[2][6]); glVertex3fv(hp[2][6]);
	    glNormal3fv(hp[3][6]); glVertex3fv(hp[3][6]);
	    glNormal3fv(hp[2][7]); glVertex3fv(hp[2][7]);
	    glNormal3fv(hp[3][7]); glVertex3fv(hp[3][7]);
	    glNormal3fv(hp[2][8]); glVertex3fv(hp[2][8]);
	    glNormal3fv(hp[3][8]); glVertex3fv(hp[3][8]);
	    glNormal3fv(hp[2][9]); glVertex3fv(hp[2][9]);
	    glNormal3fv(hp[3][9]); glVertex3fv(hp[3][9]);
	    glNormal3fv(hp[2][10]); glVertex3fv(hp[2][10]);
	    glNormal3fv(hp[3][10]); glVertex3fv(hp[3][10]);
	    glNormal3fv(hp[2][11]); glVertex3fv(hp[2][11]);
	    glNormal3fv(hp[3][11]); glVertex3fv(hp[3][11]);
	    glNormal3fv(hp[2][12]); glVertex3fv(hp[2][12]);
	    glNormal3fv(hp[3][12]); glVertex3fv(hp[3][12]);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	    glNormal3fv(hp[3][0]); glVertex3fv(hp[3][0]);
	    glNormal3fv(hp[4][0]); glVertex3fv(hp[4][0]);
	    glNormal3fv(hp[3][1]); glVertex3fv(hp[3][1]);
	    glNormal3fv(hp[4][1]); glVertex3fv(hp[4][1]);
	    glNormal3fv(hp[3][2]); glVertex3fv(hp[3][2]);
	    glNormal3fv(hp[4][2]); glVertex3fv(hp[4][2]);
	    glNormal3fv(hp[3][3]); glVertex3fv(hp[3][3]);
	    glNormal3fv(hp[4][3]); glVertex3fv(hp[4][3]);
	    glNormal3fv(hp[3][4]); glVertex3fv(hp[3][4]);
	    glNormal3fv(hp[4][4]); glVertex3fv(hp[4][4]);
	    glNormal3fv(hp[3][5]); glVertex3fv(hp[3][5]);
	    glNormal3fv(hp[4][5]); glVertex3fv(hp[4][5]);
	    glNormal3fv(hp[3][6]); glVertex3fv(hp[3][6]);
	    glNormal3fv(hp[4][6]); glVertex3fv(hp[4][6]);
	    glNormal3fv(hp[3][7]); glVertex3fv(hp[3][7]);
	    glNormal3fv(hp[4][7]); glVertex3fv(hp[4][7]);
	    glNormal3fv(hp[3][8]); glVertex3fv(hp[3][8]);
	    glNormal3fv(hp[4][8]); glVertex3fv(hp[4][8]);
	    glNormal3fv(hp[3][9]); glVertex3fv(hp[3][9]);
	    glNormal3fv(hp[4][9]); glVertex3fv(hp[4][9]);
	    glNormal3fv(hp[3][10]); glVertex3fv(hp[3][10]);
	    glNormal3fv(hp[4][10]); glVertex3fv(hp[4][10]);
	    glNormal3fv(hp[3][11]); glVertex3fv(hp[3][11]);
	    glNormal3fv(hp[4][11]); glVertex3fv(hp[4][11]);
	    glNormal3fv(hp[3][12]); glVertex3fv(hp[3][12]);
	    glNormal3fv(hp[4][12]); glVertex3fv(hp[4][12]);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	    glNormal3fv(hp[4][0]); glVertex3fv(hp[4][0]);
	    glNormal3fv(hp[5][0]); glVertex3fv(hp[5][0]);
	    glNormal3fv(hp[4][1]); glVertex3fv(hp[4][1]);
	    glNormal3fv(hp[5][1]); glVertex3fv(hp[5][1]);
	    glNormal3fv(hp[4][2]); glVertex3fv(hp[4][2]);
	    glNormal3fv(hp[5][2]); glVertex3fv(hp[5][2]);
	    glNormal3fv(hp[4][3]); glVertex3fv(hp[4][3]);
	    glNormal3fv(hp[5][3]); glVertex3fv(hp[5][3]);
	    glNormal3fv(hp[4][4]); glVertex3fv(hp[4][4]);
	    glNormal3fv(hp[5][4]); glVertex3fv(hp[5][4]);
	    glNormal3fv(hp[4][5]); glVertex3fv(hp[4][5]);
	    glNormal3fv(hp[5][5]); glVertex3fv(hp[5][5]);
	    glNormal3fv(hp[4][6]); glVertex3fv(hp[4][6]);
	    glNormal3fv(hp[5][6]); glVertex3fv(hp[5][6]);
	    glNormal3fv(hp[4][7]); glVertex3fv(hp[4][7]);
	    glNormal3fv(hp[5][7]); glVertex3fv(hp[5][7]);
	    glNormal3fv(hp[4][8]); glVertex3fv(hp[4][8]);
	    glNormal3fv(hp[5][8]); glVertex3fv(hp[5][8]);
	    glNormal3fv(hp[4][9]); glVertex3fv(hp[4][9]);
	    glNormal3fv(hp[5][9]); glVertex3fv(hp[5][9]);
	    glNormal3fv(hp[4][10]); glVertex3fv(hp[4][10]);
	    glNormal3fv(hp[5][10]); glVertex3fv(hp[5][10]);
	    glNormal3fv(hp[4][11]); glVertex3fv(hp[4][11]);
	    glNormal3fv(hp[5][11]); glVertex3fv(hp[5][11]);
	    glNormal3fv(hp[4][12]); glVertex3fv(hp[4][12]);
	    glNormal3fv(hp[5][12]); glVertex3fv(hp[5][12]);
	glEnd();

  glDisable(GL_LIGHTING);
  glColor3ub(255,  255,  255);
  glBegin(GL_POLYGON);
  glVertex3fv(hp[5][0]);
  glVertex3fv(hp[5][1]);
  glVertex3fv(hp[5][2]);
  glVertex3fv(hp[5][3]);
  glVertex3fv(hp[5][4]);
  glVertex3fv(hp[5][5]);
  glVertex3fv(hp[5][6]);
  glVertex3fv(hp[5][7]);
  glVertex3fv(hp[5][8]);
  glVertex3fv(hp[5][9]);
  glVertex3fv(hp[5][10]);
  glVertex3fv(hp[5][11]);
  glEnd();

  /* CF damn! */
  /* glDisable(GL_NORMALIZE); */

}
