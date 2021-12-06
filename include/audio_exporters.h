//
// Created by bender on 06/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTERS_H_
#define FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTERS_H_
#include "audio_exporter_abstract.h"
#include "spdlog/spdlog.h"

struct AACAudioExporter final : public AudioExporter {
  void PrepareExport(std::string_view data) override {
    spdlog::info("Preparing audio data for AAC export.");
  }

  void DoExport(const std::filesystem::path &folder) override {
    spdlog::info("Exporting audio data in AAC format to {}.", folder.c_str());
  }
};

struct WAVAudioExporter final : public AudioExporter {
  void PrepareExport(std::string_view data) override {
    spdlog::info("Preparing audio data for WAV export.");
  }

  void DoExport(const std::filesystem::path &folder) override {
    spdlog::info("Exporting audio data WAV format to {}.", folder.c_str());
  }
};

#endif//FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTERS_H_
