//
// Created by bender on 06/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTER_ABSTRACT_H_
#define FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTER_ABSTRACT_H_
#include <filesystem>
#include <string_view>

struct VideoExporter {
  virtual void PrepareExport(std::string_view data) = 0;
  virtual void DoExport(const std::filesystem::path &folder) = 0;
  virtual ~VideoExporter() = default;
};

#endif//FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTER_ABSTRACT_H_
