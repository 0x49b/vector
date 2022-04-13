#include "BlockDefinitionMacros.h"

#define DEFAULT_BLOCK_MARKER_SIZE 23.f

// Victor Active Block #1 (w/ circle markers)
START_BLOCK_DEFINITION(LIGHTCUBE1, (44.f,44.f,44.f), ORANGE)
ADD_FACE_CODE(FRONT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_CIRCLE_FRONT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(BACK_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_CIRCLE_BACK,   PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(LEFT_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_CIRCLE_LEFT,   PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(RIGHT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_CIRCLE_RIGHT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(TOP_FACE,    DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_CIRCLE_TOP,    PreActionOrientation::NONE)
ADD_FACE_CODE(BOTTOM_FACE, DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_CIRCLE_BOTTOM, PreActionOrientation::ALL)
END_BLOCK_DEFINITION

// Victor Active Block #2 (w/ square markers) [Not in production, but used in Webots tests]
START_BLOCK_DEFINITION(LIGHTCUBE2, (44.f,44.f,44.f), YELLOW)
ADD_FACE_CODE(FRONT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_SQUARE_FRONT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(BACK_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_SQUARE_BACK,   PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(LEFT_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_SQUARE_LEFT,   PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(RIGHT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_SQUARE_RIGHT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(TOP_FACE,    DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_SQUARE_TOP,    PreActionOrientation::NONE)
ADD_FACE_CODE(BOTTOM_FACE, DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBE_SQUARE_BOTTOM, PreActionOrientation::ALL)
END_BLOCK_DEFINITION

// Victor Active Block #3, Same as Cozmo LightCube3, but with light-on-dark markers [Not in production, but used in Webots tests]
START_BLOCK_DEFINITION(LIGHTCUBE3, (44.f,44.f,44.f), RED)
ADD_FACE_CODE(FRONT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_LIGHTONDARK_FRONT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(BACK_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_LIGHTONDARK_BACK,   PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(LEFT_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_LIGHTONDARK_LEFT,   PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(RIGHT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_LIGHTONDARK_RIGHT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
ADD_FACE_CODE(TOP_FACE,    DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_LIGHTONDARK_TOP,    PreActionOrientation::NONE)
ADD_FACE_CODE(BOTTOM_FACE, DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_LIGHTONDARK_BOTTOM, PreActionOrientation::ALL)
END_BLOCK_DEFINITION

//// Cozmo Active Block #1 (w/ 6 different sides)
//START_BLOCK_DEFINITION(LIGHTCUBE1, (44.f,44.f,44.f), ORANGE)
//ADD_FACE_CODE(FRONT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEI_FRONT, PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(BACK_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEI_BACK,PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(LEFT_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEI_LEFT, PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(RIGHT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEI_RIGHT, PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(TOP_FACE,    DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEI_TOP, PreActionOrientation::NONE)
//ADD_FACE_CODE(BOTTOM_FACE, DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEI_BOTTOM, PreActionOrientation::ALL)
//END_BLOCK_DEFINITION
//
//// Cozmo Active Block #2
//START_BLOCK_DEFINITION(LIGHTCUBE2, (44.f,44.f,44.f), YELLOW)
//ADD_FACE_CODE(FRONT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEJ_FRONT, PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(BACK_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEJ_BACK,PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(LEFT_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEJ_LEFT, PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(RIGHT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEJ_RIGHT, PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(TOP_FACE,    DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEJ_TOP, PreActionOrientation::NONE)
//ADD_FACE_CODE(BOTTOM_FACE, DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEJ_BOTTOM, PreActionOrientation::ALL)
//END_BLOCK_DEFINITION
//
//// Victor Active Block #3, Same as Cozmo LightCube3, but with light-on-dark markers [Not in production, but used in Webots tests]
//START_BLOCK_DEFINITION(LIGHTCUBE3, (44.f,44.f,44.f), RED)
//ADD_FACE_CODE(FRONT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_FRONT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(BACK_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_BACK,   PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(LEFT_FACE,   DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_LEFT,   PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(RIGHT_FACE,  DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_RIGHT,  PreActionOrientation::UP | PreActionOrientation::DOWN)
//ADD_FACE_CODE(TOP_FACE,    DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_TOP,    PreActionOrientation::NONE)
//ADD_FACE_CODE(BOTTOM_FACE, DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_LIGHTCUBEK_BOTTOM, PreActionOrientation::ALL)
//END_BLOCK_DEFINITION

// "Ghost" Active Block - NOT FOR USE IN BLOCKWORLD (these are hacks for behaviors)
START_BLOCK_DEFINITION(LIGHTCUBE_GHOST, (44.f,44.f,44.f), WHITE) // White like ghosts
ADD_ALL_FACES(DEFAULT_BLOCK_MARKER_SIZE, Vision::MARKER_UNKNOWN)
END_BLOCK_DEFINITION

#undef DEFAULT_BLOCK_MARKER_SIZE