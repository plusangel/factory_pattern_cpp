//
// Created by bender on 10/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_FAST_EXPORTER_H_
#define FACTORY_PATTERN_CPP_INCLUDE_FAST_EXPORTER_H_
#include <memory>
#include "exporter_factory.h"
#include "video_exporters.h"
#include "audio_exporters.h"

struct FastExporter final : public ExporterFactory{
  std::unique_ptr<VideoExporter> GetVideoExporter() override {
    return std::make_unique<H264BPVideoExporter>(H264BPVideoExporter {});
  }
  std::unique_ptr<AudioExporter> GetAudioExporter() override {
    return std::make_unique<AACAudioExporter>(AACAudioExporter {});
  }
};

#endif//FACTORY_PATTERN_CPP_INCLUDE_FAST_EXPORTER_H_
