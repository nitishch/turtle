/*
 * CS475/CS675 - Computer Graphics
 *  ToyLOGO Assignment Base Code
 *
 * Copyright 2011, Parag Chaudhuri, Department of CSE, IIT Bombay
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "render_drawing.hpp"


void triline(turtle_t &turt, double length, bool arg)
{
    double newlength = length/4.0;
   if (length <= 0.03)
   {
      turt.forward(length);
   }
   else if (arg)
   {
    
     /*triline(turt, newlength);
     turt.turn_left(60);
     triline(turt, newlength);
     turt.turn_right(120);
     triline(turt, newlength);
     turt.turn_left(60);
     triline(turt, newlength);*/
	 triline(turt, newlength,true);
	 turt.turn_left(60);
	 triline(turt, newlength,false);
	 turt.turn_left(60);
	 triline(turt, newlength,true);
	 turt.turn_right(60);
	 triline(turt, newlength,false);
	 turt.turn_right(60);
	 triline(turt, newlength,true);
	 turt.turn_right(60);
	 triline(turt, newlength,false);
	 turt.turn_right(60);
	 triline(turt, newlength,true);
	 turt.turn_left(60);
	 triline(turt, newlength,false);
	 turt.turn_left(60);
	 triline(turt, newlength,true);
	 
	
   }
   else{
	 triline(turt, newlength, false);
	 turt.turn_right(60);
	 triline(turt, newlength, true);
	 turt.turn_right(60);
	 triline(turt, newlength, false);
	 turt.turn_left(60);
	 triline(turt, newlength, true);
	 turt.turn_left(60);
	 triline(turt, newlength, false);
	 turt.turn_left(60);
	 triline(turt, newlength, true);
	 turt.turn_left(60);
	 triline(turt, newlength, false);
	 turt.turn_right(60);
	 triline(turt, newlength, true);
	 turt.turn_right(60);
	 triline(turt, newlength, false);
}
	
}

//Drawing a Koch Snowflake
void koch(turtle_t &turt, double x)
{
   turt.reset();
   turt.clear();
   //turt.set_pos(-0.3, 0.5);
   //turt.turn_right(30);

  /* for (int i = 0; i<3; i++)
     {
       triline(turt, x);
       turt.turn_right(120);
     }*/
   turt.set_pos(-1,-1);
	triline(turt,x, true);
}

void render_drawing(turtle_t &turt)
{
	koch(turt, 2.0);
/*	turt.reset();
	turt.clear();
//	turt.set_pos(-0.3, 0.5);
	turt.turn_right(30);
	turt.forward(0.5);
	turt.turn_right(90);
	turt.forward(0.5);*/
}
