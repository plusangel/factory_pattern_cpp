//
// Created by bender on 06/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTER_ABSTRACT_H_
#define FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTER_ABSTRACT_H_
#include <filesystem>
#include <string_view>

struct AudioExporter {
  virtual void PrepareExport(std::string_view data) = 0;
  virtual void DoExport(const std::filesystem::path &folder) = 0;
  virtual ~AudioExporter() = default;

  using Ptr = std::shared_ptr<AudioExporter>;
};

#endif//FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTER_ABSTRACT_H_
