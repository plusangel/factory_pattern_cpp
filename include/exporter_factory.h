//
// Created by bender on 10/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_EXPORTER_FACTORY_H_
#define FACTORY_PATTERN_CPP_INCLUDE_EXPORTER_FACTORY_H_
#include <memory>
#include "video_exporter_abstract.h"
#include "audio_exporter_abstract.h"

struct ExporterFactory {
  virtual std::unique_ptr<VideoExporter> GetVideoExporter() = 0;
  virtual std::unique_ptr<AudioExporter> GetAudioExporter() = 0;
  virtual ~ExporterFactory() = default;
};

#endif//FACTORY_PATTERN_CPP_INCLUDE_EXPORTER_FACTORY_H_
