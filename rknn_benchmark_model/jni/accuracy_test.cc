#include <string>

#include "rknn_api_wrapper.h"
#include "stb_include.h"

void AccuracyTest(const std::string& model_path, bool debug_flag,
                  const std::string& ground_truth_images_path,
                  const std::string& ground_truth_labels,
                  const std::string& model_output_labels,
                  const std::string& output_file_path, int32_t num_images,
                  int32_t num_ranks) {
  auto wrapper = RknnApiWrapper(model_path, false, debug_flag);
}