#include <memory>
#include <map>
#include <string>
#include <iostream>
#include "exporter_factory.h"
#include "fast_exporter.h"
#include "high_quality_exporter.h"
#include "master_quality_exporter.h"

std::unique_ptr<ExporterFactory> ReadExporter() {
  std::map<std::string, std::unique_ptr<ExporterFactory>> factories;
  factories["low"] = std::make_unique<FastExporter>(FastExporter {});
  factories["high"] = std::make_unique<HighQualityExporter>(HighQualityExporter {});
  factories["master"] = std::make_unique<MasterQualityExporter>(MasterQualityExporter {});

  while (true) {
    std::cout << "Enter desired output quality (low, high, master): ";
    std::string export_quality;
    std::cin >> export_quality;
    if (factories.contains(export_quality)) {
      return std::move(factories[export_quality]);
    }
    std::cout << "There is something wrong, please try again." << std::endl;
  }
}

void Exporter(std::unique_ptr<ExporterFactory> exporter) {
  auto video_exporter = exporter->GetVideoExporter();
  auto audio_exporter = exporter->GetAudioExporter();

  audio_exporter->PrepareExport("placeholder_for_audio_data");
  video_exporter->PrepareExport("placeholder_for_video_data");
}

int main() {
  auto exporter = ReadExporter();
  Exporter(std::move(exporter));

  return 0;
}
