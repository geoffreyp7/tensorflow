/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/lite/experimental/micro/examples/micro_vision/image_provider.h"

#include "tensorflow/lite/experimental/micro/examples/micro_vision/model_settings.h"

namespace {
uint8_t g_dummy_image_data[kMaxImageSize];
}  // namespace

TfLiteStatus GetImage(tflite::ErrorReporter* error_reporter, int* image_size,
                      uint8_t** image_data) {
  for (int i = 0; i < kMaxImageSize; ++i) {
    g_dummy_image_data[i] = 0;
  }
  *image_size = kMaxImageSize;
  *image_data = g_dummy_image_data;
  return kTfLiteOk;
}
