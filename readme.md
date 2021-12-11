[![CMake](https://github.com/plusangel/solid_principles_cpp/actions/workflows/cmake.yml/badge.svg)](https://github.com/plusangel/factory_pattern_cpp/actions/workflows/cmake.yml)

# Factory pattern in C++

### Description

### Tutorial

### Motivation

### Non - optimised example
Audio exporter abstract class: [audio_exporter_abstract.h](./include/audio_exporter_abstract.h) \
Video exporter abstract class: [video_exporter_abstract.h](./include/video_exporter_abstract.h)

Audio exporters: [audio_exporters.h](./include/audio_exporters.h) \
Video exporters: [video_exporters.h](./include/video_exporters.h)

Example: [main_non_optimised.cpp](src/main_non_optimised.cpp)

### Optimised example
Fast exporter: [fast_exporter.h](./include/fast_exporter.h) \
High quality exporter: [high_quality_exporter.h](./include/high_quality_exporter.h) \
Master quality exporter: [master_quality_exporter.h](./include/master_quality_exporter.h)

Example: [main_optimised.cpp](src/main_optimised.cpp)

### Optimised example (Dependency Inversion)
Example: [main_optimised_di.cpp](src/main_optimised_di.cpp)

## Author
Angelos Plastropoulos (aka Bender) via [CodingAdventures.org](http://codingadventures.org/)

## Credits
[Arjan Codes](https://www.youtube.com/channel/UCVhQ2NnY5Rskt6UjCUkJ_DA) \
[Design Patterns in Modern C++](https://www.amazon.co.uk/Design-Patterns-Modern-Approaches-Object-Oriented/dp/1484236025) a book written by Dmitri Nesteruk