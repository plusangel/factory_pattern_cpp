#include "audio_exporter_abstract.h"
#include "video_exporter_abstract.h"
#include "audio_exporters.h"
#include "video_exporters.h"
#include <iostream>
#include <string>
#include <memory>

int main() {
  std::shared_ptr<AudioExporter> audio_exporter;
  std::shared_ptr<VideoExporter> video_exporter;

  std::cout << "Enter desired output quality (low, high, master): ";
  std::string export_quality;
  std::cin >> export_quality;

  if (export_quality == "low") {
    audio_exporter = std::make_shared<AACAudioExporter>(AACAudioExporter{});
    video_exporter = std::make_shared<H264BPVideoExporter>(H264BPVideoExporter{});
  } else {
    audio_exporter = std::make_shared<WAVAudioExporter>(WAVAudioExporter{});
    video_exporter = std::make_shared<LossLessVideoExporter>(LossLessVideoExporter{});
  }

  audio_exporter->PrepareExport("placeholder_for_audio_data");
  video_exporter->PrepareExport("placeholder_for_video_data");

  std::filesystem::path media_path {"/usr/media/"};
  audio_exporter->DoExport(media_path);
  video_exporter->DoExport(media_path);

  return 0;
}
