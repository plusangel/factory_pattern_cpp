//
// Created by bender on 10/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_MASTER_QUALITY_EXPORTER_H_
#define FACTORY_PATTERN_CPP_INCLUDE_MASTER_QUALITY_EXPORTER_H_
#include <memory>
#include "exporter_factory.h"
#include "video_exporters.h"
#include "audio_exporters.h"

struct MasterQualityExporter final : public ExporterFactory{
  std::unique_ptr<VideoExporter> GetVideoExporter() override {
    return std::make_unique<LossLessVideoExporter>(LossLessVideoExporter {});
  }
  std::unique_ptr<AudioExporter> GetAudioExporter() override {
    return std::make_unique<WAVAudioExporter>(WAVAudioExporter {});
  }
};

#endif//FACTORY_PATTERN_CPP_INCLUDE_MASTER_QUALITY_EXPORTER_H_
