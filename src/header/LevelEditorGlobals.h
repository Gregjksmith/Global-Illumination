#pragma once

#include "Scene.h"
#include "entities/Entity.h"

extern Scene* levelEditorScene;
extern Entity* currentSelectedEntity;

extern unsigned int windowSettingIndex;
#define NO_LIGHTING_WINDOW_INDEX 0
#define LIGHT_WINDOW_INDEX 1
#define ADS_WINDOW_INDEX 2
#define ADS_BRDF_WINDOW_INDEX 3
#define GLOBAL_JACOBI_WINDOW_INDEX 4
#define RADIANCE_CACHE_UNIFORM_GRID_WINDOW_INDEX 5
#define MONTE_CARLO_BRDF_WINDOW_INDEX 6 
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_TORRANCE_SPARROW 7
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_BEARD_MAXWELL 8
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_COOK_TORRANCE 9
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_KAJIYA 10
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_POULIN_FOURNIER 11
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_HE_TORRANCE_SILLION_GREENBERG 12
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_OREN_NAYAR 13
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_COUPLED 14
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_ASHIKHMIN_SHIRLEY 15
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_GRANIER_HEIDRICH 16
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_MINNAERT 17
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_PHONG 18
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_BLINN 19
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_LEWIS 20
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_NEUMANN_NEUMANN 21
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_STRAUSS 22
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_WARD 23
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_SCHLICK 24
#define MONTE_CARLO_BRDF_WINDOW_INDEX_BRDF_LAFORTUNE 25
#define LIGHT_WINDOW_FRUSTUM_INDEX 26

#define SCREEN_WIDTH 1200
#define SCREEN_HEIGHT 800
#define FRAME_PERIOD 0.000333
#define NEAR_PLANE -1
#define FAR_PLANE -2000
#define MILLISECONDS_PER_FRAME 17
#define MILLISECONDS_PER_UPDATE 10

#define POST_PROCESSING 0

extern bool keyPress[256];

extern bool done;