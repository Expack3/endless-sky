/* SpriteShader.h
Copyright (c) 2014 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#ifndef SPRITE_SHADER_H_
#define SPRITE_SHADER_H_

class Sprite;
class Point;

#include <cstdint>



// Class for drawing sprites. You can optionally draw a sprite with a custom
// zoom level or color swizzle. A more complicated function is also provided for
// adjusting the scale, rotation, clipping, fading, etc. of a sprite; this is
// most often just for use by the DrawList class, which calculates those input
// parameters based on an object's rotation, animation frame, etc.
class SpriteShader {
public:
	// Initialize the shaders.
	static void Init();
	
	// Draw a sprite.
	static void Draw(const Sprite *sprite, const Point &position, float zoom = 1., int swizzle = 0);
	
	static void Bind();
	static void Add(uint32_t tex0, uint32_t tex1, const float position[2], const float transform[4], int swizzle = 0, float clip = 1., float fade = 0.);
	static void Unbind();
};



#endif
