[![CMake](https://github.com/plusangel/solid_principles_cpp/actions/workflows/cmake.yml/badge.svg)](https://github.com/plusangel/factory_pattern_cpp/actions/workflows/cmake.yml)

# Factory pattern in C++

### Description
Factory pattern is another prevalent pattern that we need to know. The main principle about the factory is that it separates the creation from use. But what doe this means? We design a factory that creates the objects we want depending on some input arguments. We do not use the constructors directly on the consuming side. We access the factory, we order the type of object that we want back, and the factory returns that object. Please visit my blog to read the [full story](http://codingadventures.org/2021/12/17/factory-pattern-in-modern-c/).

### Tutorial
It is a fictional audio and video exporter. We do not implement it, but rather try to build the framework. In the beginning, we will show a non optimised example and then how we will improve it using the factory pattern.

### Motivation
When you want to see if you understand a concept, the best test is to try to explain it to someone else. This is my attempt to descrive how the factory pattern works and together with you understand deeper and deeper.

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