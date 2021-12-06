//
// Created by bender on 06/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTERS_H_
#define FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTERS_H_
#include "video_exporter_abstract.h"
#include "spdlog/spdlog.h"

struct LossLessVideoExporter final : public VideoExporter {
  void PrepareExport(std::string_view data) override {
    spdlog::info("Preparing video data for lossless export.");
  }

  void DoExport(const std::filesystem::path &folder) override {
    spdlog::info("Exporting video data in lossless format to {}.", folder.c_str());
  }
};

struct H264BPVideoExporter final : public VideoExporter {
  void PrepareExport(std::string_view data) override {
    spdlog::info("Preparing video data for H.264 (Baseline) export.");
  }

  void DoExport(const std::filesystem::path &folder) override {
    spdlog::info("Exporting video data in H.264 (Baseline) format to {}.", folder.c_str());
  }
};

struct H264Hi422PVideoExporter final : public VideoExporter {
  void PrepareExport(std::string_view data) override {
    spdlog::info("Preparing video data for H.264 (Hi422P) export.");
  }

  void DoExport(const std::filesystem::path &folder) override {
    spdlog::info("Exporting video data in H.264 (Hi422P) format to {}.", folder.c_str());
  }
};


#endif//FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTERS_H_
