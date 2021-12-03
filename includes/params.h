#define PYTHON_VERSION "'3.8.2 (default, Mar 13 2020, 10:14:16)  [GCC 9.3.0]'"
#define BITPLANES 1
#define SYMMETRY "C1"
#define RULESTRING "b3s23"
#define CLASSIFIER apg::base_classifier<BITPLANES>
#define C1_SYMMETRY 1
#define STANDARD_LIFE 1
#ifdef LONG_TILES
#define UPATTERN apg::upattern<apg::VTile44, 28, 44>
#define INCUBATOR apg::incubator<56, 88>
#else
#define UPATTERN apg::upattern<apg::VTile28, 28, 28>
#define INCUBATOR apg::incubator<56, 56>
#endif
#define GLIDERS_EXIST 1
