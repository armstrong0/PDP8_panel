
/*******************************************************************************
*  The "New BSD License" : http://www.opensource.org/licenses/bsd-license.php  *
********************************************************************************

Copyright (c) 2010, Mark Turney
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the <organization> nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

******************************************************************************/

#include "simple_svg_1.0.0.hpp"
using namespace svg;

// black 17171b
// red orange ba4c2b
// gold bf9f27
// white dddecf
// text 
// Demo page shows sample usage of the Simple SVG library.
int
main ()
{
    Color pdpBlack (23, 23, 27);
    Color pdpWhite (224, 226, 206);

    Dimensions dimensions (1650, 800);
    Document doc ("pdp8_backing.svg",
                  Layout (dimensions, Layout::BottomLeft));

    // Red image border.
    Polygon border (Fill (pdpWhite), Stroke (1, Color::Red));
    border << Point (0, 0) << Point (dimensions.width, 0)
        << Point (dimensions.width, dimensions.height) << Point (0,
                                                                 dimensions.
                                                                 height);
    doc << border;

    // first we should draw the boxes

    int x, y;
//switch reg
    // display select
    doc << Circle (Point (1100, 350), 20, Fill (pdpWhite),
                   Stroke (2, pdpBlack));

// print holes

    // power
    x = 150;
    y = 150;
    doc << Circle (Point (x, y), 65, Fill (pdpWhite), Stroke (2, pdpBlack));
    doc << Line (Point (x - 33, y), Point (x + 33, y), Stroke (2, pdpBlack));
    doc << Line (Point (x, y - 33), Point (x, y + 33), Stroke (2, pdpBlack));


    // SW
    x = 300;
    doc << Circle (Point (x, y), 65, Fill (pdpWhite), Stroke (2, pdpBlack));
    doc << Line (Point (x - 33, y), Point (x + 33, y), Stroke (2, pdpBlack));
    doc << Line (Point (x, y - 33), Point (x, y + 33), Stroke (2, pdpBlack));

    // Switch Register
    doc << Rectangle (Point (400, 150 + 33), 550, 65, Fill (pdpWhite),
                      Stroke (2, pdpBlack));
    for (int k = 400; k < 1000; k = k + 50)
    {
        x = k;
        doc << Circle (Point (x, y), 65, Fill (pdpWhite),
                       Stroke (2, pdpBlack));
        doc << Line (Point (x - 33, y), Point (x + 33, y),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x, y - 33), Point (x, y + 33),
                     Stroke (2, pdpBlack));
    }

    // addr load        
    doc << Rectangle (Point (1050, 150 + 33), 50, 65, Fill (pdpWhite),
                      Stroke (2, pdpBlack));
    for (int k = 1050; k < 1150; k = k + 50)
    {
        x = k;
        doc << Circle (Point (x, y), 65, Fill (pdpWhite),
                       Stroke (2, pdpBlack));
        doc << Line (Point (x - 33, y), Point (x + 33, y),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x, y - 33), Point (x, y + 33),
                     Stroke (2, pdpBlack));
    }
    // clear et all load        
    doc << Rectangle (Point (1200, 150 + 33), 200, 65, Fill (pdpWhite),
                      Stroke (2, pdpBlack));
    for (int k = 1200; k < 1450; k = k + 50)
    {
        x = k;
        doc << Circle (Point (x, y), 65, Fill (pdpWhite),
                       Stroke (2, pdpBlack));
        doc << Line (Point (x - 33, y), Point (x + 33, y),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x, y - 33), Point (x, y + 33),
                     Stroke (2, pdpBlack));
    }
    // deposit
    x = 1500;

    doc << Circle (Point (x, y), 65, Fill (pdpWhite), Stroke (2, pdpBlack));
    doc << Line (Point (x - 33, y), Point (x + 33, y), Stroke (2, pdpBlack));
    doc << Line (Point (x, y - 33), Point (x, y + 33), Stroke (2, pdpBlack));
    y = 250;
    doc <<  Line (Point (100, y - 33), Point (100, y + 33), Stroke (2, pdpBlack));
    doc <<  Line (Point (1300, y - 33), Point (1300, y + 33), Stroke (2, pdpBlack));
    // disp sel
    x = 1100;
    y = 350;
    doc << Circle (Point (x, y), 35, Fill (pdpWhite), Stroke (2, pdpBlack));
    doc << Line (Point (x - 13, y), Point (x + 13, y), Stroke (2, pdpBlack));
    doc << Line (Point (x, y - 13), Point (x, y + 13), Stroke (2, pdpBlack));
    x = x+ 37;
    doc << Circle (Point (x, y), 10, Fill (pdpWhite), Stroke (2, pdpBlack));
    doc << Line (Point (x - 5, y), Point (x + 5, y), Stroke (2, pdpBlack));
    doc << Line (Point (x, y - 5), Point (x, y + 5), Stroke (2, pdpBlack));
    // run
    y = 500;

    doc << Circle (Point (x, y), 13, Fill (pdpWhite), Stroke (2, pdpBlack));
    doc << Line (Point (x - 7, y), Point (x + 7, y), Stroke (2, pdpBlack));
    doc << Line (Point (x, y - 7), Point (x, y + 7), Stroke (2, pdpBlack));

    // address LED      
    for (int k = 250; k < 1000; k = k + 50)
    {
        x = k;
        y = 500;
        doc << Circle (Point (x, y), 13, Fill (pdpWhite),
                       Stroke (2, pdpBlack));
        doc << Line (Point (x - 7, y), Point (x + 7, y),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x, y - 7), Point (x, y + 7),
                     Stroke (2, pdpBlack));
    }

    // data disp LED    
    for (int k = 400; k < 1000; k = k + 50)
    {
        x = k;
        y = 450;
        doc << Circle (Point (x, y), 13, Fill (pdpWhite),
                       Stroke (2, pdpBlack));
        doc << Line (Point (x - 7, y), Point (x + 7, y),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x, y - 7), Point (x, y + 7),
                     Stroke (2, pdpBlack));
    }
    doc.save ();
}
